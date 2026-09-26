#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("First letter of each word: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') {
                printf("%c ", str[i]);
            }
        }
    }
    printf("\n");

    return 0;
}
