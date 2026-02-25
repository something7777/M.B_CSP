//MB,period7, silly_sentences.c
#include <stdio.h>

int main() {
    char noun1 [50];
    char adjective [50];
    char noun2[50];
    printf("give me a noun please! >v<: ");
    scanf("%s",&noun1);

    printf("give me a adjective now please!:D : ");
    scanf("%s",&adjective);

    printf("Lastly, give me a another noun  please!:P : ");
    scanf("%s",&noun2);

    printf("After hiding the painting in his %s for two years, he grew %s and tried to sell it to a/an %s \n",noun1, adjective, noun2);
    return 0;
}