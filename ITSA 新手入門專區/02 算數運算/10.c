#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double mi;
    double km;
    scanf("%lf", &mi);
    km = mi * 1.6;
    km = floor((km * 10 + 0.5));
    km /= 10;
    printf("km=%.1lf\n", km);

	return 0;
}