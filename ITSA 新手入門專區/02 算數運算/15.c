#include <stdio.h>
#include <stdlib.h>

int main() {
    int min;
    scanf("%d", &min);
    double money;
    money = min * 0.9;
    if(min>=1500)
        money *= 0.79;
    else if(min>800)
        money *= 0.9;
    printf("%.1lf\n", money);

	return 0;
}