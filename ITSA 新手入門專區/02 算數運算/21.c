#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0 && i % 3 == 0){
            if(i % 12 != 0)
                sum += i;
        }
    }
    printf("%d\n", sum);

	return 0;
}