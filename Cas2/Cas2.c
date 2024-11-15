// 9.1 Рекурзивне функције
// 9.29. Саставити рекурзивну функцију за одређивање факторијела целог броја, а затим је тестирати
// у главном програму за унети цео број n и исписати добијени резултат. 

#include <stdio.h>

int faktorijel(int n){
    if (n==1){
        return n;
    }
    return n*faktorijel(n-1);
}

int main(){
    int n;
    printf("Uneti ceo broj n i onda cemo naci njegov faktorijel ");
    scanf("%d",&n);
    
    printf("Za uneti broj faktorijel je %d",faktorijel(n));
    return 0;
}