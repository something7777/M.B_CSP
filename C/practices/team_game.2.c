#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
char *words[] = {"rhythm", "queue", "sixth", "jazz", "gym", "cryptic", "abyss", "xylophone", "gypsy", "mnemonic", "buck", "avenue", "injury", "awkward"};

char *word;

int attempts = 0;

char list_of_guessed_letters[100];

int guessed_count = 0;

bool won = false;


int hangman(){
    int attempts = 0;
    if (attempts = 0){
        printf("---------\n");
        printf("|       |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 1){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 2){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 3){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|      / \\\n");
        printf("|_________\n");
    }else{
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\\\n");
        printf("|      / \\\n");
        printf("|_________\n");
    }
    return 0;
}

void game_loop(){
    char guess;
    while (true){
        won = true;
        printf("\n");

        for (int i = 0; i < strlen(word); i++);
    };
}


int main(){
    hangman();

return 0;
}