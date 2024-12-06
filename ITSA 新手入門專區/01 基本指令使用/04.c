#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *eng[] = {"dog", "cat", "duck", "cow", "fox"};
    char *chin[] = {"狗", "貓", "鴨", "牛", "狐"};

    char input[5];

    scanf("%s", input);

    for (int i = 0; i < 5; i++) {
        if (strcmp(input, eng[i]) == 0) {
            printf("%s\n", chin[i]);
            break;
        } else if (strcmp(input, chin[i]) == 0) {
            printf("%s\n", eng[i]);
            break;
        }
    }

    return 0;
}