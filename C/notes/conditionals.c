//MB conditionals.c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int grade = 90;
    bool isprograming = true;

    if(grade >= 90){
        if (grade> 93){printf("your grade is %d percent. thats an A\n");
        }else{
            printf("your grade is %d percent. thats an -A");
        }
        printf("your grade is %d percent. That is an A!\n", grade);
    }else if(grade >= 80){
        printf("your grade is %d percent. That is an b.\n", grade);
    } else if(grade >= 70){
        printf("your grade is %d percent. That is an c.\n", grade);
    }else if(grade >= 60){
        printf("your grade is %d percent. That is an D.\n", grade);
    }else{
        printf("your grade is %d percent. that is an F.\n",grade);
        return 0;
    }

    int num = -41;

    if(num< 10 && num > -10){
        printf("%d is a single digit number\n",num);
    }
    else if(num< 100 && num > -100){
        printf("%d is a double digit number\n",num);
    }
    else if(num< 1000&& num > -1000){
        printf("%d is a triple digit number\n",num);
    }
    else if(num< 10000 && num > -10000){
        printf("%d is a quadruple digit number\n",num);
    }else{
        printf("%d is a large number\n",num);
    }

    char name [] = "treyson";

    if (strcmp(name, "treyson")== 0){
        printf("welcome admin\n");
    }else{
        printf("welcome %s\n", name);
    }

    return 0;
}