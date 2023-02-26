#include <stdio.h>
#include <stdlib.h>

int charToInt(char c);

int main(void) {
        char input[200] = "6\nand\ndick\njane\npuff\nspot\nyertle\nbjvg xsb hxsn xsb qymm xsb rqat xsb pnetfn\nxxxx yyy zzzz www yyyy aaa bbbb ccc dddddd";
        int nbmots = charToInt(input[0]);
        char test = input[2];
        char dic[nbmots][10];
        printf("%d\n%c\n", nbmots, test);
        int i = 0;
        int k = 0;
        while (k <= 6) {
                for (i = i; strcmp(input[i],'\') == 0 && strcmp(input[i+1], 'n') == 0; i++} {
                                dic[k][i] = input[i];
                                }
                k++;
        }
        printf("%s\n", dic[0]);
        return 0;
}


int charToInt(char c){
	int num = 0;

	//Substract '0' from entered char to get
	//corresponding digit
	num = c - '0';

	return num;
}