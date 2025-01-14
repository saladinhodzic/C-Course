// 2.1. Саставити програм који на екрани исписује текст: Od danas programiramo u jeziku
// C. 

// #include <stdio.h>
// int main(void)
// {
//     printf("C");
// }

// 2.3. Ако су декларисане следеће променљиве
// int a, b;
// long int i, j;
// double x, y;
// char f;
// написати функцију која учитава вредности са тастатуре за следеће променљиве:

#include <stdio.h>

int main(void)
{
    int a, b;
    long int i, j;
    double x, y;
    char f;

    scanf("%d %d",&a,&b);
    scanf("%ld %ld",&i,&j);
    scanf("%lf %lf",&x,&y);
    scanf("%c",&f);
}