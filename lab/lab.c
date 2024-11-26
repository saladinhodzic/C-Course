// 1.	Sa tastature se učitava prirodan broj n i zatim n prirodnih brojeva među kojima su bar dva različita. Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost. Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje:
// Druga po veličini vrednost je 6.

// #include <stdio.h>
// #define MAX 100

// int main(){
//     int n,niz[MAX],i,max;
//     printf("Napisi duzinu niza\n");
//     scanf("%d",&n);
//     // dodavanje elemenata u niz
//     for (i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     // prolazenje kroz niz i trazenje drugog najveceg
//     max = niz[0];
//     for(i=1;i<n;i++){
//         if (max < niz[i] ){
//             max=niz[i];
//         }
//     }

//    int drugiNajveci=niz[0];

//    for(i=1;i<n;i++){
//     if (niz[i]!=max && drugiNajveci<niz[i]){
//         drugiNajveci=niz[i];
//     }
//    }

//    printf("Drugi najveci element u nizu je %d\n",drugiNajveci);

//     printf("Najveci element u nizu je %d ",max);

//     return 0;
// }

// 2.	Napisati program kojim se ispituju sve mogućnosti da pri jednom bacanju kockice zbir brojeva bude dati broj S.
// Na primer: Za S=5 rešenja su 1,1,3   1,2,2...

// #include <stdio.h>

// int main(){
//     int S,i,k,m;
//     printf("Unesite broj od 1 do 6\n");
//     scanf("%d",&S);

//     // for (i=1;i<=S;i++){
//     //     if (a+b+c<S){
//     //         a+=1;
//     //     }else if (a+b+c==S){
//     //         printf("Jedno od resenja je %d %d %d ",a,b,c);
//     //         a=1;
//     //         break;
//     //     }
//     // }

//     for (i=1;i<=S;i++){
//         for (k=1;k<=S;k++){
//             for (m=1;m<=S;m++){
//                 if (i+k+m==S){
//                     printf("%d %d %d\n",i,k,m);
//                 }
//             }
//         }
//     }
    
//     return 0;
// }


// 3.	Napisati program kojim se nalaze delitelji prirodnog broja X<1000.

// #include <stdio.h>

// int main(){
//     int n,i;
//     printf("Unesite broj do 1000\n");
//     scanf("%d",&n);

//     printf("Delioci datog broja su:\n");

//     for(i=1;i<n;i++){
//         if(n%i==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// 4.	Ispisati sve savršene brojeve do 1000. Savršen broj je onaj koji je jednak sumi svojih delitelja isključujući njega (npr. 6=3+2+1).

#include <stdio.h>

int main(){
    int i,j;
    for (i=2;i<=1000;i++){
        int suma=0;
        for(j=1;j<i;j++){
            if (i%j==0){
                suma+=j;
            }
        }
        if (suma == i){
            printf("Broj %d je savrsen broj\n",i);
        }
    }
    return 0;
}