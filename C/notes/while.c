//MB
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main () {
    int i = 1;
    while (i<= 10){
            printf("%d, ", i);
            i++; // increases variables i by 1
    }

    //set a random nuber
    srand(time(NULL));

    printf("\n%d\n", rand() % 11); // random number between 0 and 10
    printf("%d\n", (rand() %10) +1);
    printf("%d\n", (rand() %5) + 5);
    
    int goose = (rand() % 20) +1;
    int count =1;
    while (count < goose){
        printf("duck\n");
        count ++;
    }
    printf("GOOSE!");

    int number = (rand() % 30) + 1;
    while (true){
        int guess;
        printf("guess a number between 1 and 30");
        scanf("%d", &guess)
        if (guess == number){
            printf("you WON! the number was %d\n");
            break;
        }else if (guess < number){
            printf("guess higher");
        }else(guess > number){
            printf("guess lower")
        }
    }
    return 0;
}