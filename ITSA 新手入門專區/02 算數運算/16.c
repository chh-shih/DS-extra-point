#include <stdio.h>
#include <stdlib.h>

int main() {
    int starth;
    int startm;
    int endh;
    int endm;
    int money;
    scanf("%d %d", &starth, &startm);
    scanf("%d %d", &endh, &endm);
    endh -= starth;
    endm -= startm;
    endm += endh * 60;
    if(endm <= 120){
        money = (endm / 30) * 30;
        endm -= 120;
    }
    else{
        money = 120;
        endm -=120;
        money += (endm / 30) * 40;
        if(endm > 0){
            money = 280;
            endm -=120;
            money += (endm / 30) * 60;
        }
    }

    printf("%d\n", money);
	return 0;
}