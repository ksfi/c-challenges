#include <stdio.h>

void I(int m, int n) {
        char array[m][n] = {"0"};
}

void C(char *array, int m, int n) {
        for (int i = 0; i <= m, i++) {
                for (int j = 0; j <= n; j++) {
                        *(*(array + i) + j) = "0"; 
                }
        }
}

void L(char *array, int x, int y, char color) {
        *(*(array + x) + y) = color;
}

void H(char *array, int x1, int x2, int y, char color) {
        for (int i = x1; i <= x2; i++) {
                *(*(array + y) + i) = color;
        }
}

void V(int x, int y1, int y2, char color) {
        for (int i = y1; i <= y2; i++) {
                *(*(array + i) + x) = color;
        }
}

void K(char *array,int x1, int y2, int x2; int y2, char color) {
        V(array, y1, y2, x1, color);
        V(array, y1, y2, x2, color);
        H(array, x1, x2, y1, color);
        H(array, x1, x2, y2, color);
}

void F(char *array, int x, int y, char color) {
        couleurdepart = *(*(array + x) + y);
        *(*(array + x) + y) = color;

        for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                        if (*(*(array + x + i) + y + j) == couleurdepart) {
                                *(*(array + x + i) + y + j) = color;
                        }
                }
        }
}

void S(char *name, int tailleNome) {
        for (int i = 0; i <= tailleNome; i++) {
                printf("%c", *(name + i));
        }
}


int main(void) {
        char input[]
        return 0;
}

