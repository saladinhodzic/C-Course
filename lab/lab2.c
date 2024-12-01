// Dat je prirodan broj k. Napisati program kojim se određuje koja se cifra nalazi na k-toj poziciji niza:
// 110100100010000100000
// U kome su redom dopisivani brojevi 1, 10, 100, 1000, 10000...

// KORACI:

// GENERISATI NIZ CIFARA 1101001000

// NACI ZA UNETI BROJ K ODGOVARAJACU CIFRU U NIZU

// #include <stdio.h>
// #include <math.h>

// int generate(int niz[],int length,int noviNiz[]){
//     int i,acc,j,m=1,k;
//     noviNiz[100];
//     for(i=0;i<length;i++){
//         acc=round(pow(10,i));
//         niz[i]=acc;
//     }
//     for (j=0;j<length;j++){
//         while(niz[j]>0){
//             int remainder=niz[j]%10;
//             niz[j]/=10;
//             noviNiz[m]=remainder;
//             m++;
//         }
//     }
//     return noviNiz;
// }

// int main(){
//     int niz[10],i,noviNiz[100]={1};
//     int length=sizeof(niz)/sizeof(niz[0]);
//     generate(niz,length,noviNiz);


//     int pozicija;
//     printf("Unesite neki indeks i mi cemo ti vratiti cifru sa tog indeksa\n");
//     scanf("%d",&pozicija);

//     for(i=0;i<length;i++){
//         if (i==pozicija){
//             printf("Na %d. poziciji se nalazi cifra %d.",pozicija,noviNiz[i]);
//         }
//     }

    
//     return 0;
// }


// Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине
// n) целих бројева. 

// #include <stdio.h>

// int main(){
//     int niz[100],i,suma=0;
//     int n;
//     printf("Izaberi duzinu niza\n");
//     scanf("%d",&n);
//     // int length=sizeof(niz)/4;
//     // for (i=0;i<length;i++){
//     //     suma+=niz[i];
//     // }
//     for (i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//         suma+=niz[i];
//     }
//     // float result=suma/length;
//     printf("Aritmeticka sredina brojeva niza je %.2f",(float) suma/n);
//     return 0;
// }

// Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуеј
// аритметичку средину оних елемената низа који су дељиви са 3.

#include <stdio.h>

int main(){
    int niz[100],n,i,k,brojac=0,suma=0;

    printf("Uneti duzinu niza n\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Uneti %d. cifru niza: ",i+1);
        scanf("%d",&niz[i]);
    }

    for (k=0;k<n;k++){
        if (niz[k]%3==0){
            suma+=niz[k];
            brojac++;
        }
    }


    printf("Aritmeticka sredina brojeva niza koji su deljivi sa 3 je %.2f",(float)suma/brojac);
    return 0;
}