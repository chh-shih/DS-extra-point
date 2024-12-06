#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    double W, area;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%lf",&W);
        area = floor(W * W * 10 + 0.5);
        area /= 10;
        printf("%.1lf\n", area);
    }

	return 0;
}