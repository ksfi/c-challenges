#include <stdio.h>
#include <stdlib.h>

#define N_MAX = 200
#define M_MAX = 200


int main(void) {
        int field[N_MAX][M_MAX];
        return 0;
}

void border(int c, int l) {
        return 
}

void setZero(int field[N_MAX][M_MAX]) {
        for (int i = 0; i <= N_MAX; i++) {
                for (int j = 0; j <= M_MAX; j++) {
                        field[i][j] = 0;
                }
        }
}

void increase(int i, int j) {
        for (int m = -1; m <= 1; m++ ) {
                for (int n = -1; n <= 1; n++) {
                        if (field[m][n] == "*") {
                                field[i][j]++;
                        }
                }
        }
}

void setMine(int i, int j) {
        field[i][j] = -1;
                
        for (int m)
}
