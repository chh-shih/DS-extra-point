#include <stdio.h>
#include <stdlib.h>

int main() {
    double d;
    scanf("%lf", &d);
    d *= 100.0;
    d /= 23.8;
    if(d < round(d))
        printf("%.0lf\n", d);
    else
        printf("%.0lf\n", d + 1);

	return 0;
}