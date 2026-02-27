//Mb period 7 tim.c
#include <stdio.h>

int main() {
    int time;
    printf("what time is it?\n");
    scanf("%d", &time);

    if(time >= 0000){
        printf("good night\n", time);
    }else if(time >= 0700){
        printf("its morning!good morning!!.\n", time);
    } else if(time >= 70){
        printf("your grade is %d percent. That is an c.\n", grade);
    }else if(grade >= 60){
        printf("your grade is %d percent. That is an D.\n", grade);
    }else{
        printf("your grade is %d percent. that is an F.\n",grade);
        return 0;
    }
        return 0;
}
