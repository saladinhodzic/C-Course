// POINTERS

// Саставити функцију која врши замену места две променљиве, а затим у главном програму
// исписати вредности и адресе променљивих пре и после замене. Пренос аргумената функције вршити
// преко показивача. 

#include <stdio.h>
void swap(int *a,int *b);

int main(void)
{
    int a = 2, b = 3;
    swap(&a,&b);
    printf("Obrnuti redosled brojeva je %d %d",a,b);
}

void swap(int *a,int *b)
{
    int tmp = *a;
    *a=*b;
    *b=tmp;
}
