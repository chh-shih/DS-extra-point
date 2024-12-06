#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
    }
    else if(n == 2){
        printf("    *\n");
        printf("   ***\n");
        printf("  *****\n");
        printf(" *******\n");
        printf("*********\n");
    }
    else{
        printf("*********\n");
        printf(" *******\n");
        printf("  *****\n");
        printf("   ***\n");
        printf("    *\n");
    }

	return 0;
}