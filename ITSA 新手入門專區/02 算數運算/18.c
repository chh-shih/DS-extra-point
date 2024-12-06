#include <stdio.h>
#include <stdlib.h>

int main() {
    int s;
    scanf("%d", &s);
    int td, th, tm, ts;
    ts = s % 60;
    s /= 60;
    tm = s % 60;
    s /= 60;
    th = s % 24;
    td = s / 24;
    printf("%d days\n", td);
    printf("%d hours\n", th);
    printf("%d minutes\n", tm);
    printf("%d seconds\n", ts);

	return 0;
}