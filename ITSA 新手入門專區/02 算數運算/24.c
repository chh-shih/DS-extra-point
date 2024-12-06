#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, start, end;
    scanf("%d", &n);
    int sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        scanf("%d %d", &start, &end);
        if(start > end){
            int temp = start;
            start = end;
            end = temp;
        }
        for(int j = start; j <= end; j++)
            sum += j;
        printf("%d\n", sum);
    }

	return 0;
}