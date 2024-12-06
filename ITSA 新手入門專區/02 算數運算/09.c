#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a > 31)
            printf("Value of more than 31\n");
        else
            printf("%.0lf\n", pow(2,a));
    }
    
	return 0;
}