#include <stdio.h>

// izracunaj obim i povrsinu pravugaunika na osnovu dva parametra
int main(){
    float a,b,o,p;
    printf("Stranica a ");
    scanf("%f",&a);
    printf("Unesi stranicu b ");
    scanf("%f",&b);
    o = 2*a + 2*b;
    printf("Obim je %.2f",o);
    p = a*b;
    printf("Povrsina je %.2f",p);
    // getche();


    return 0;
}