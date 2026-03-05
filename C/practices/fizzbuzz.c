//MB, period 7, fizzbuzz.c

#include <stdio.h>

int main() {
    int start = 1;

    while (start <= 15){
        if (start% 15== 0){
            printf("Fizzbuzz\n");
        }

        else if (start % 3 == 0){
            printf("Fizz\n");
        }
        else if (start % 5 == 0){
            printf("Buzz\n");
        } else {
            printf("%d\n",start);
        }
        
        start++;
        
    }

    return 0;
}