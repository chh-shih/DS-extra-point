#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        printf("%d %d %d\n", a, a * a, a * a * a);
    }
    
	return 0;
}