#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    while(x > 0){
        if(x>=10)
            printf("%d,", x % 10);
        else
            printf("%d\n", x % 10);
        x /= 10;
    }

	return 0;
}