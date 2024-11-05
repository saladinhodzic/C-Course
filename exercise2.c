
#include <stdio.h>

int main (){
// Саставити програм који за унети полупречник круга исписује његов обим и површину.
    // float PI = 3.14;
    // float r,o,p;
    // printf("Uneti poluprecnik kruga:\n");
    // scanf("%f",&r);
    // o=2*PI*r;
    // p=PI * r*r;
    // printf("Obim kruga je %.2f i povrsina kruga je %.2f",o,p);
// 2.19. Саставити програм који за унети полупречник основице и висине ваљка исписује његову
// површину и запремину. (Површина: P=2*r*π*(r+h) , Запремина: V=r2
// *π*h) 
    // float PI=3.14;
    // float r,h,p,v;
    // printf("Unesi poluprecnik osnovice\n");
    // scanf("%f",&r);
    // printf("Unesi visinu valjka\n");
    // scanf("%f",&h);
    // p=2*r*PI*(r+h);
    // v=r*r*PI*h;
    // printf("Povrsina valjka je %.2f i zapremina je %.2f",p,v);
    // 2.20. Саставити програм којим се вредност темепературе унете у Фаренхајтима приказује у
// Целзијусима
    // float F,C;
    // printf("Unesi stepene u Farehajtovima\n");
    // scanf("%f",&F);
    // C=(F-32)*5/9;
    // printf("Stepeni u celzijusu su %.2f C",C);
    // 1.	Sa tastature se učitava prirodan broj n i zatim n prirodnih brojeva među kojima su bar dva različita. Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost. Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje:

    int n,br,i;
    printf("Unesi n prirodnih brojeva medju kojima su bar dva razlicita");
    scanf("%d",&n);
    int list[5];
    for(i=0;i<list[n];i++){
        scanf("%d",&list[i]);
    }
    printf("%d",list[5]);
    return 0;
}