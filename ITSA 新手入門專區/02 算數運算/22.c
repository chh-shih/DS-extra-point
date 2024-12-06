#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int base = 64;
    if(n > 0)
        printf("0");
    else{
        printf("1");
        n += 128;
    }
    while(base > 0){
        if(n >= base){
            printf("1");
            n -= base;
        }
        else{
            printf("0");
        }
        base /= 2;
    }
    printf("\n");

	return 0;
}