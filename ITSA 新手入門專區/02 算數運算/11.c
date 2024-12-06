#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double C;
    double F;
    scanf("%lf", &C);
    F = C * 1.8 + 32.0;
    F = floor((F * 10 + 0.5));
    F /= 10;
    printf("%.1lf\n", F);

	return 0;
}