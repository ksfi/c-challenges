#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
        char input[100000];
        strcpy(input, "1\n4 3\nSmith, M.N., Martin, G., Erdos, P.: Newtonian forms of prime factors\nErdos, P., Reisig, W.: Stuttering in petri nets\nSmith, M.N., Chen, X.: First order derivates in structured programming\nJablonski, T., Hsueh, Z.: Selfstabilizing data structures\nSmith, M.N.\nHsueg, Z.\nChen, X.");
        int nbScenario;
        nbScenario = atoi(&input[0]);
        nbOuvrages = atoi(&input[3]);
        nbTot = atoi(&input[4]);

        int k = 0;
        int i = 0;
        
        while (1) {
                int nbCaract = 0
                int j = 0;
                while (k <= 2 + nbOuvrages) {
                        if (input[i] == "\n") {
                                k++;
                        }
                        j++;
                }
                nbCaract = j;

                for (int j = nbCaract; input[j] == "\0"; j++) {
                         char name[40];

                }
        }

        return 0;
}