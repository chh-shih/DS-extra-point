#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tol, counter = 0;
    scanf("%d", &tol);
    while(tol >= 10){
        tol -= 10;
        counter++;
    }
    printf("NT10=%d\n", counter);
    counter = 0;
    while(tol >= 5){
        tol -= 5;
        counter++;
    }
    printf("NT5=%d\n", counter);
    counter = 0;
    while(tol >= 1){
        tol -= 1;
        counter++;
    }
    printf("NT1=%d\n", counter);
    counter = 0;

	return 0;
}