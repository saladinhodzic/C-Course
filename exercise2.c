
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
    // Creating simple array

    // int i,n,max;
    // printf("Unesi brojeve\n");
    // scanf("%d",&n);
    // if (n>=1){
    //     int a[n];
    //     for (i=0;i<n;i++){
    //         scanf("%d",&a[i]);
    //     }

    //     for (i=0;i<n;i++){
    //         if (a[i]>a[i-1]){
    //             max=a[i];
    //         }else{
    //             max=a[i];
    //         }
    //         printf("%d",a[i]);
    //     }
    // }
    // printf("%d",max);
// Саставити програм који ће учитати оцене за n ученика и исписати просечну оцену свих
// ученика и број ученика који имају оцену 1.

    // int brojUcenika,brojKengura=0,i,sumaOcena=0;
    // float prosekOcena;

    // printf("Unesi broj ucenika: ");
    // scanf("%d",&brojUcenika);
    // int  ocene[brojUcenika];
    // for (i=0;i<brojUcenika;i++){
    //     printf("Unesi ocenu %d. ucenika: ",i+1);
    //     scanf("%d",&ocene[i]);
    //     sumaOcena+=ocene[i];
    //     if (ocene[i]==1){
    //         brojKengura++;
    //     }
    // }
    // prosekOcena=sumaOcena/brojUcenika;
    // printf("Prosek ocena je %.2f\n",prosekOcena);
    // printf("Broj kengura je %d",brojKengura);

// Саставити програм који ће исписати све делиоце унетог броја n. 

    int n,i;
    printf("Unesi broj: ");
    scanf("%d",&n);
    for (i=1;i<n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}