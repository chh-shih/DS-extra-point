#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int ax, ay, bx, by;
    double distan;
    scanf("%d %d %d %d %d", &ax, &ay, &bx, &by);
    distan = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    distan *= 1000;
    distan = round(distan + 0.5);
    distan /= 1000;
    printf("%.2lf\n", distan);

 	return 0;
}