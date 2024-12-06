#include <stdio.h>
#include <stdlib.h>

int main() {
    int base;
    int height;
    scanf("%d %d", &base, &height);
    double area = base * height / 2.0;
    printf("Triangle area:%.1lf\n", area);

	return 0;
}