#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);
    h = h * h / 10000;
    w /= h;
    w *= 100;
    w = floor(w + 0.5) / 100;
    printf("%.2lf\n", w);

	return 0;
}