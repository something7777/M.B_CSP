//MB, Period7, financial_calculator.c
#include <stdio.h>
#include <math.h>


int main(){
    float income;
    printf("what is your monthly income?\n");
    scanf("%f", &income);

    float rent;
    printf("what is your monthly rent/mortgage?\n");
    scanf("%f", &rent);

    float utilities;
    printf("what is your monthly utilities cost?\n");
    scanf("%f", &utilities);

    float groceries;
    printf("what is your monthly groceries cost?\n");
    scanf("%f", &groceries);

    float transportation;
    printf("what is your monthly transportation cost?\n");
    scanf("%f", &transportation);

    float rent_percentage = (rent / income) * 100;
    float utilities_percentage = (utilities / income) * 100;
    float groceries_percentage = (groceries / income) * 100;
    float transportation_percentage = (transportation / income) * 100;
    
    printf("Rent is: %.2f%%\n", rent_percentage);
    printf("Utilities is: %.2f%%\n", utilities_percentage);
    printf("Groceries is: %.2f%%\n", groceries_percentage);
    printf("Transportation is: %.2f%%\n", transportation_percentage);


    return 0; 
}