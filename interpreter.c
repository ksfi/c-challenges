#include <stdio.h>

struct registre {
        int numero;
        int b1, b2, b3;
};
typedef struct registre registre;

int main(void) {
        int input[17][3] = {{1}, {}, {2,9,9}, {4,9,2}, {4,9,5}, {3,9,9}, {4,9,2}, {4,9,5}, {3,9,9}, {2,8,3},{2,7,9}, {6,8,9}, {0,7,8}, {1,0,0}, {0,0,0}, {0,0,0}, {0,0,0}};
        
        registre R[10];
        for (int i = 0; i <= 9; i++) {
                registre r;
                r.numero = i;
                r.b1 = 0;
                r.b2 = 0;
                r.b3 = 0;
                R[i] = r;
        }

        int k = 1;
        int t2, t3, t4, t5, t6, t7, t0 = 0;
        for (int i = 2; i <= 16; i++) {
                switch (input[i][0]) {
                        case 2:
                                if (t2 == 0) {
                                        k++;
                                }
                                t2++;
                                R[input[i][1]].b1 = input[i][2];
                                R[input[i][1]].b2 = input[i][2];
                                R[input[i][1]].b3 = input[i][2];
                        case 3:
                                if (t3 == 0) {
                                        k++;
                                }
                                t3++;
                                R[input[i][1]].b1 = R[input[i][1]].b1 + input[i][2];
                                R[input[i][1]].b2 = R[input[i][1]].b2 + input[i][2];
                                R[input[i][1]].b3 = R[input[i][1]].b3 + input[i][2];
                        case 4:
                                if (t4 == 0) {
                                        k++;
                                }
                                t4++;
                                R[input[i][1]].b1 = R[input[i][1]].b1 * input[i][2];
                                R[input[i][1]].b2 = R[input[i][1]].b2 * input[i][2];
                                R[input[i][1]].b3 = R[input[i][1]].b3 * input[i][2];
                        case 5:
                                if (t5 == 0) {
                                        k++;
                                }
                                t5++;
                                R[input[i][1]].b1 = R[input[i][2]].b1;
                                R[input[i][1]].b2 = R[input[i][2]].b2;
                                R[input[i][1]].b3 = R[input[i][2]].b3;
                        case 6:
                                if (t6 == 0) {
                                        k++;
                                }
                                t6++;
                                R[input[i][1]].b1 = R[input[i][1]].b1 + R[input[i][2]].b1;
                                R[input[i][1]].b2 = R[input[i][1]].b2 + R[input[i][2]].b2;
                                R[input[i][1]].b3 = R[input[i][1]].b3 + R[input[i][2]].b3;
                        case 7:
                                if (t7 == 0) {
                                        k++;
                                }
                                t7++;
                                R[input[i][1]].b1 = R[input[i][1]].b1 * R[input[i][2]].b1;
                                R[input[i][1]].b2 = R[input[i][1]].b2 * R[input[i][2]].b2;
                                R[input[i][1]].b3 = R[input[i][1]].b3 * R[input[i][2]].b3;
                        case 0:
                                if (t0 != 0) {
                                        k++;
                                }
                                t0++;
                                if (input[i][1] == 0 && input[i][2] == 0 && input[i + 1][0] == 0 &&input[i + 1][1] == 0 && input[i + 1][2] == 0 && input[i + 2][0] == 0 && input[i + 2][1] == 0 && input[i + 2][2] == 0) {
                                        break;
                                }
                }
        }
        printf("resultat = %d\n", k);
        return 0;
}