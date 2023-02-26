#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
        char *test = malloc(2 * sizeof(char));
        *test = "2D";
        stcrpy(test, "2D");
        char *test2 = malloc(sizeof(test));
        strcpy(test2, test);
        printf("%s\n", test2);
        free(test2);
        return 0;
}
