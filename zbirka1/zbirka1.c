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

// #include <stdio.h>

// int main(void)
// {
//     int a, b;
//     long int i, j;
//     double x, y;
//     char f;

//     scanf("%d %d",&a,&b);
//     scanf("%ld %ld",&i,&j);
//     scanf("%lf %lf",&x,&y);
//     scanf("%c",&f);
// }

// Napisati program koji nalazi najveci broj u nizu od 10 brojeva

#include <stdio.h>
void formiraj(int niz[],int n);
void najveci(int niz[],int n);
int main(void)
{
    int niz[100],n;

    printf("Unesite duzinu n: ");
    scanf("%d",&n);
    formiraj(niz,n);
    najveci(niz,n);
}

void formiraj(int niz[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&niz[i]);
    }
}
void najveci(int niz[],int n)
{
    int najveci = niz[0];
    for (int i=0;i<n;i++)
    {
        if (niz[i]>najveci)
        {
            najveci = niz[i];
        }
    }
    printf("Najveci broj u nizu je %d.",najveci);
}