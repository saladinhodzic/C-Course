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

#include <stdio.h>

void obrnut( int n){
    if (n==0){
        return;
    }
    printf("%d ",n) ;
    obrnut(n-1);
}

int main(){
    int n;
    printf("Unesi broj n a mi cemo ti ispisati brojeve do tog broja u obrnutom redosledu ");
    scanf("%d",&n);
    obrnut(n);
    return 0;
}