//MB, p7, variables_practice.c
#include <stdio.h>

int main(){
    int number;
    char user[50];
    int age; 
    char breakfast = "waffles";
    char school = "UCAS";
    int year = "2026";
    char color[50];
    float gpa = 4.0;
    char eye_color = "brown";
    char school_subject = "CSP";

    printf("your favorite subject is: %d",school_subject);
    printf("your eye color is %d",eye_color);

    printf("favorite color?\n");
    scanf("%s", &color);

    printf("its the year: %d\n",year);

    printf("you go to: %d \n",school);

    printf("%d are yummy", breakfast);

    printf("how old are you %d?: \n");
    scanf("%d",&age);

    printf("Tell me your name NOW!!!! ONLY YOUR NAME\n");
    scanf("%s", &user);

    printf("what is your favorite number*only 1-10*?\n");
    scanf("%d", &number);

    printf("your gpa is: %f\n", gpa);

    return 0;

}
