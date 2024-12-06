#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i > 1; i--) {
        int is = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is = 0;
                break;
            }
        }
        if (is) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
