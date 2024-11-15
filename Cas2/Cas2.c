// 9.1 Рекурзивне функције
// 9.29. Саставити рекурзивну функцију за одређивање факторијела целог броја, а затим је тестирати
// у главном програму за унети цео број n и исписати добијени резултат. 

// #include <stdio.h>

// int faktorijel(int n){
//     if (n==1){
//         return n;
//     }
//     return n*faktorijel(n-1);
// }

// int main(){
//     int n;
//     printf("Uneti ceo broj n i onda cemo naci njegov faktorijel ");
//     scanf("%d",&n);
    
//     printf("Za uneti broj faktorijel je %d",faktorijel(n));
//     return 0;
// }

// 9.30. Саставити рекурзивну функцију која степеновање целог броја на целобројни изложилац, а
// затим тестирати функцију за дати природни број и изложилац и исписати добијени резултат. 


// #include <stdio.h>
// int stepen(int n,int s){
//     if (s==1){
//         return n;
//     }
//     return n * stepen(n,s-1);
// }

// int main(){
//     int n,s;
//     printf("Uneti prirodan broj n i stepen s ");
//     scanf("%d %d",&n,&s);
//     printf("Stepen datog broja je %d",stepen(n,s));
//     return 0;
// }

// Саставити рекурзивну функцију која врши сабирање првих n бројева, а затим тестирати
// функцију за дато n и исписати добијени резултат.

// #include <stdio.h>

// int zbirDoN(int n){
//     if (n == 1){
//         return n;
//     }
//     return n + zbirDoN(n-1);
// }

// int main(){
//     int n;
//     printf("Unesi broj n i mi cemo ti ispisati zbir brojeva do tog broja ");
//     scanf("%d",&n);
//     printf("Za dati broj zbir iznosi %d",zbirDoN(n));
//     return 0;
// }

// Саставити рекурзивну функцију која исписује првих n бројева у обрнутом редолседу, а затим
// тестирати функцију за дато n.

// #include <stdio.h>

// void obrnut( int n){
//     if (n==0){
//         return;
//     }
//     printf("%d ",n) ;
//     obrnut(n-1);
// }

// int main(){
//     int n;
//     printf("Unesi broj n a mi cemo ti ispisati brojeve do tog broja u obrnutom redosledu ");
//     scanf("%d",&n);
//     obrnut(n);
//     return 0;
// }

// NIZOVI

// Саставити програм који учита елементе низа A A A A = ( 1 2 , ,..., n ) дужине n и низа
// B B B B = ( 1 2 , ,..., m ) дужине m и спаја у један низ C A A A B B B = ( 1 2 1 2 , ,..., , , ,..., n m ) дужине n+m.
// Исписати новокреирани низ. 

#include <stdio.h>
#define MAX 100

void kreirajNiz(int niz[],int d){
    int i;
    for (i=0;i<d;i++){
        scanf("%d",&niz[i]);
        //printf("%d",niz[i]);
    }
}

void ispis(int niz[],int d){
    int i;
    for (i=0;i<d;i++){
        printf("%d",niz[i]);
    }
}

void formiraj(int nizA[],int nizB[],int nizC[],int n, int m){
    int i,j=0;
    for (i=0;i<n;i++){
        nizC[i]=nizA[i];
    }
    for(i=n;i<n+m;i++)
    {
        nizC[i]=nizB[j];
        j++;
    }
}

int main(){
    int nizA[MAX], nizB[MAX],nizC[MAX],n,m,i;
    printf("Unesi duzinu prvog i drugog niza ");
    scanf("%d %d",&n,&m);
    printf("Unesi prvi niz ");
    kreirajNiz(nizA,n);
    printf("Unesi drugi niz ");
    kreirajNiz(nizB,m);
    printf("Spojeni niz C glasi: ");
    formiraj(nizA,nizB,nizC,n,m);
    ispis(nizC,n+m);
    return 0;
}