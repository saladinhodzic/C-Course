// POINTERS

// Саставити функцију која врши замену места две променљиве, а затим у главном програму
// исписати вредности и адресе променљивих пре и после замене. Пренос аргумената функције вршити
// преко показивача. 

// #include <stdio.h>
// void swap(int *a,int *b);

// int main(void)
// {
//     int a = 2, b = 3;
//     swap(&a,&b);
//     printf("Obrnuti redosled brojeva je %d %d",a,b);
// }

// void swap(int *a,int *b)
// {
//     int tmp = *a;
//     *a=*b;
//     *b=tmp;
// }

// Саставити функцију за одређивање целобројног количника и остатка при целобројном
// дељењу два цела броја, а затим функцију тестирати у главном програму. Исписати адресе и
// вредности резултата. Пренос аргумената функције вршити преко показивача.

#include <stdio.h>
void func(int a,int b,int *mod,int *div);
int main(void)
{
    int a,b;
    printf("Unesite vrednosti dva cela broja: ");
    scanf("%d %d",&a,&b);
    int mod,div;

    func(a,b,&mod,&div);

    printf("Nas moduo se nalazi na adresi %p a vrednost mu je %d\n",&mod,mod);
    printf("Nas celobrojni kolicnik se nalazi na adresi %p a vrednost mu je %d",&div,div);

}

void func(int a,int b,int *mod,int *div)
{
    *mod=a%b;
    *div=a/b;
}