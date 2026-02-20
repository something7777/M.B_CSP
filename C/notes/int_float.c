//MB integers and floats
#include <stdio.h>
#include <math.h>

int main(){
    int people = 22;
    int apples = 25;
    int room = 200;

    printf("people: %d\napples: %d\nroom: %d\n", people, apples, room);

    float liters = 2.7;
    float fahrenheit = 72.82;
    const float pi = 3.14159;
    float celsius = (fahrenheit-32) * 5/9;

    printf("liters: %.2f\nFahrenheit: %.1f\npi: %.4f\n", liters, fahrenheit, pi);
    printf("each person gets%f apples\n",(float)apples/people);
    printf("celsius is: %.2f\n", round(celsius));
    printf("%d\n",(int)pow(2,3));
    sqrt(10);// save as variable or print< dont just leave it
    return 0;
}