#include <stdio.h>
#include <stdlib.h>

void depense(float input[10], float **depense, int k, int offset);
float minimum(float *depense, int k);
float total(float *depense, int k);

int main(void) {
        float input[10] = {3,10.00,20.00,30.00,4,15,15.01,3.00,3.01,0};
        int  k = input[0];
        int k_rel = input[0];
        int offset = 0;

        while (input[k] != 0) {
                float *depenset = NULL;
                depense(input, &depenset,k, offset);
                float tot = total(depenset,k_rel);
                float min = minimum(depenset,k_rel);
                free(depenset);
                k_rel = input[k + 1];
                k = k + 1 + input[k + 1]; printf("resultat = %f\n", tot);
                offset = k_rel;
        }

        return 0;
}

float total(float *depense, int k) {
        int total = 0;
        int i;
        float resultat = 0;
        for (i = 0; i < k; i++) {
                total = total + *(depense + i);
        }
        
        total = total / k;

        for (i = 0; i < k; i++) {
                if (*(depense + i) < total) {
                        resultat = resultat + (- *(depense + i) + total);
                }
        }
        return resultat;
}

float minimum(float *depense, int k) {
        float min = *depense;
        for (int i = 1; i <= k; i++) {
                if (min > *(depense + i) && *(depense + i) != 0) {
                        min = *(depense + i);
                }
        }

        return min;
}

void depense(float *input, float **depense, int k, int offset) {
        *depense = malloc((k - 1) * sizeof(float));
        
        if (depense == NULL) {
                exit(0);
        }

        for (int i = offset + 1; i <= k; i++) {
                *(*depense + i - 1 - offset) = *(input + i);
        }
}