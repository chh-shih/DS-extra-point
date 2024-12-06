#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    int B;
    int H;
    scanf("%d %d %d", &T, &B, &H);
    double area = (T + B) * H / 2.0;
    printf("Trapezoid area:%.1lf\n", area);

	return 0;
}