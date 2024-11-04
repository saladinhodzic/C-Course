// Саставити програм који за унети полупречник круга исписује његов обим и површину.

#include <stdio.h>

int main (){
    float PI = 3.14;
    float r,o,p;
    printf("Uneti poluprecnik kruga:\n");
    scanf("%f",&r);
    o=2*PI*r;
    p=PI * r*r;
    printf("Obim kruga je %.2f i povrsina kruga je %.2f",o,p);
    return 0;
}