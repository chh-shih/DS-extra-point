#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", x / 1000);
    x %= 1000;
    printf("%d\n", x / 100);
    x %= 100;
    printf("%d\n", x / 10);
    x %= 10;
    printf("%d\n", x / 1);

	return 0;
}