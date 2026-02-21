//MB, p7, variables_practice.c
#include <stdio.h>

int main(){
    int number;
    char user[50];

    printf("Tell me your name NOW!!!! ONLY YOUR NAME\n");
    scanf("%s", &user);
    printf("what is your favorite number*only 1-10*?\n");
    scanf("%d", &number);
    printf("your number is:%d\n", number);
    return 0;

}
