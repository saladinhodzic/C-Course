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

// #include <stdio.h>
// void formiraj(int niz[],int n);
// void najveci(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;

//     printf("Unesite duzinu n: ");
//     scanf("%d",&n);
//     formiraj(niz,n);
//     najveci(niz,n);
// }

// void formiraj(int niz[],int n)
// {
//     int i;
//     for (i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }
// void najveci(int niz[],int n)
// {
//     int najveci = niz[0];
//     for (int i=0;i<n;i++)
//     {
//         if (niz[i]>najveci)
//         {
//             najveci = niz[i];
//         }
//     }
//     printf("Najveci broj u nizu je %d.",najveci);
// }

// Napisati program koji racuna aritmeticku sredinu brojeva niza

// #include <stdio.h>
// void formiraj(int niz[],int n);
// void aritmetickaSredina(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza n: ");
//     scanf("%d",&n);
//     formiraj(niz,n);
//     aritmetickaSredina(niz,n);
// }
// void formiraj(int niz[],int n)
// {
//     int i;
//     for(i = 0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// void aritmetickaSredina(int niz[],int n)
// {
//     float suma=0;
//     for (int i=0;i<n;i++)
//     {
//         suma+=niz[i];
//     }
//     printf("Aritmeticka sredina niza je %.2f",suma/n);
// }

// Napisati program koji unosi i ispisuje matrixu 2x3

// #include <stdio.h>
// void formiraj(int matrica[100][100],int n,int m);
// void ispisi(int matrica[100][100],int n,int m);
// int main(void)
// {
//     int matrica[100][100],n=2,m=3;
//     formiraj(matrica,n,m);
//     ispisi(matrica,n,m);
// }

// void formiraj(int matrica[100][100],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// void ispisi(int matrica[100][100],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             printf("%d ",matrica[i][j]);
//         } 
//         printf("\n");
//     }
// }

// Napisati program koji racuna zbir dve matrice 2x2

#include <stdio.h>
void zbir(int matrica1[100][100],int matrica2[100][100], int n);
void formiraj(int matrica[100][100], int n);
int main(void)
{
    int matrica1[100][100],matrica2[100][100],n=2;
    formiraj(matrica1,n); 
    formiraj(matrica2,n); 
    zbir(matrica1,matrica2,n);
}

void formiraj(int matrica[100][100], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrica[i][j]);
        }
    }
}
void zbir(int matrica1[100][100],int matrica2[100][100], int n)
{
    int suma=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            suma += matrica1[i][j] + matrica2[i][j];
        }
    }
    printf("Zbir obe matrice je %d",suma);
}