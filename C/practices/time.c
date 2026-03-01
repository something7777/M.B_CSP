//Mb period 7 tim.c
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {

    int time;
    printf("what time is it in military time?: \n");
    scanf("%d", &time);

    if (time <= 11 && time >= 1){
        printf("good morninggggg!!!!\n",time);
    }else if (time >= 12 && time <= 15){
        printf("good after noooonnnnnnnnnnn!!!! \n",time);
    }else if (time >= 16 && time <= 19){
        printf("iTS BED TIME GOOD NIGHT shhhhhhh.....zzzzz\n",time);
    }

    return 0;
}
