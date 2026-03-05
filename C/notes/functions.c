#include <stdio.h>
//example 1
int sqr(int num){
    return num* num;
}

//example2 (no parameters and return)
    int count = 0;
    void add(){
        count++;
    }

//ex3
void hello(char* name){
    printf("hello %s! welcome to my program\n",name);
}

int main(){
    //example 1 comtinue
    int number = sqr(12);
    printf("%d\n", number);
    printf("%d\n", sqr(8));

    //example 2 continued

    printf("%d\n",count);
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    printf("%d\n",count);

    //ex3
    hello("mayzi");
    hello("kai");
    hello("addie");
    return 0;
}