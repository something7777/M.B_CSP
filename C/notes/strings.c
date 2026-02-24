// MB strings notes
#include <stdio.h>
#include <string.h>

int main() {
    char subject[] = "computer science principals\n";
    char school [] = "UCAS";
    char book [50];

    printf("what is your favorite book: ");
    //scanf("%s", &book);

    fgets(book, sizeof(book), stdin);

    printf("this is %s at %s, It is awesome!\n", subject, school);
    printf("%s is a cool book!!!", book);

    //concatenation 
    char first[]= "mayzi";
    char last[] = "bless";
    char full_name[40];
    first [0] = 'a';
    first [1] = 'd';
    first [2] = 'd';
    first [3] = 'i';
    first [4] = 'e';
    first [5] = ' ';
    strcat(full_name, first);
    strcat(full_name, last);
    strcat(full_name, " ");

    printf("%s\n", full_name);

    // lrngth of string
    printf("%lu\n", strlen(full_name));

    return 0;
}