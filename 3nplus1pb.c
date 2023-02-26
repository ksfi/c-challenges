#include <stdio.h>

void maxCL(int i, int j);
int cycleLength(int *n);

int main(void) {
        int i = 100;
        int j = 200;
        maxCL(i, j);
        return 0;
}


int cycleLength(int *n) {
        int cycle_lenght = 0;

        if (*n == 1) {
                return 1;
        }

        while (1) {
                if (*n % 2 == 0) {
                        *n = *n / 2;
                        cycle_lenght++;
                        if (*n == 1) {
                                break;
                        }
                }
                else if (*n % 2 != 0) {
                        *n = 3*(*n) + 1;
                        cycle_lenght++;
                        if (*n == 1) {
                                break;
                        }
                }
        }

        return cycle_lenght + 1;
}


void maxCL(int i, int j) {
        int max_CL;
        int k = 0;

        for (k = i; k <= j; k++) {
                int valeur = k;
                int *pointeur = &valeur;
                int CL = cycleLength(pointeur);
                if (CL > max_CL) {
                        max_CL = CL;
               }
        }

        printf("%d %d %d", i, j, max_CL);
}
