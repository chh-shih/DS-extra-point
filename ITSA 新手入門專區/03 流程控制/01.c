#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0)
        printf("0\n");
    else if(n<0)
        printf("負數\n");
    else
        printf("正數\n");;

	return 0;
}