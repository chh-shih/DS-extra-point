#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, s;
    double money;
    scanf("%d %d", &h, &s);
    if(h <= 60){
        money = h * s;
    }
    else if(h <= 120){
        money = s * 60;
        money += s * (h - 60) * 1.33;
    }
    else{
        money = s * 60;
        money += s * 60 * 1.33;
        money += s * (h - 120) * 1.66;
    }
    printf("%.1lf\n", money);

	return 0;
}