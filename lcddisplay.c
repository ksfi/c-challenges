#include <stdio.h>
#include <stdlib.h>

int liste(int **listet, int num);

int main(void) {
        
        int input[6] = {2, 12345, 3, 67890, 0, 0};
        
        while (1) {
                for (int i = 0; i <= 6; i++) {

                        if (i % 2 == 0) {
                                if (input[i] == 0 && input[i + 1] == 0) {
                                        break;
                                }
                                int size = input[i];
                                int *listet = NULL;
                                int tailleChiffre = liste(&listet, input[i + 1]);
                                free(listet);

                                switch (size) {
                                        case 3:
                                                for (int i = 0; i < tailleChiffre; i++) {
                                                        if (listet[i] == 0) {
                                                                printf("--\n|\n|\n\n|\n|");
                                                                printf("|\n|\n\n|\n|");
                                                        }
                                                }
                                }
                        }
                }
                break;
        }

        return 0;
}

int liste(int **listet, int num) {
        int temp, factor = 1;
        int size = 0;

        temp = num;
        while (temp) {
                temp = temp / 10;
                factor = factor * 10;
                size++;
        }

        *listet = malloc(size*sizeof(int));
        int k = 0;
        while (factor > 1) {
                factor = factor / 10;
                *(*listet + k) = num / factor;
                num = num % factor;
                k++;
        }
        
        return k;
}