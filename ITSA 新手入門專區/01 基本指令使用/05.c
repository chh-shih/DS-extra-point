#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, t;
    scanf("%d", &n);
    int p=10000;
    while(n > 0){
        t = n / p;
        n %= p;
        p /= 10;
        for(int i = 0; i < t; i++){
            printf("*");
        }
        printf("\n");
    }

	return 0;
}