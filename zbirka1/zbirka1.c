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

// #include <stdio.h>
// void zbir(int matrica1[100][100],int matrica2[100][100], int n);
// void formiraj(int matrica[100][100], int n);
// int main(void)
// {
//     int matrica1[100][100],matrica2[100][100],n=2;
//     formiraj(matrica1,n); 
//     formiraj(matrica2,n); 
//     zbir(matrica1,matrica2,n);
// }

// void formiraj(int matrica[100][100], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }
// void zbir(int matrica1[100][100],int matrica2[100][100], int n)
// {
//     int suma=0;
//     for (int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             suma += matrica1[i][j] + matrica2[i][j];
//         }
//     }
//     printf("Zbir obe matrice je %d",suma);
// }

/*Написати наредбу којом се штампају:
а) променљива х у декадном систему;
б) реалне променљиве х и у;
в) промељива х у декадном, окталном и хексадецималном систему;
г) штампа вредност променљиве х типа char. */

// #include <stdio.h>

// int main(void)
// {
//     int x = 15;
//     printf("%d %o %x",x,x,x);
// }

// Саставити програм којим се учитавају и приказују један цео и један реалан број. 

// #include <stdio.h>

// int main(void)
// {
//     int x;
//     float y;
//     scanf("%d",&x);
//     scanf("%f",&y);
//     printf("Ceo broj %d\nRealan broj %f",x,y);
// }

// Саставити програм који омогућује унос целог броја са тастатуре и његов приказ у
// децималном, окталном и хексaдецималном облику. 

// #include <stdio.h>

// int main(void)
// {
//     int x;
//     printf("Unesite ceo broj x: ");
//     scanf("%d",&x);
//     printf("Dekadni sistem: %d\nOktalni sistem: %o\nHeksadecimalni sistem: %x",x,x,x);
// }

// Саставити програм којим се на екрану исписује распоред слова као што је приказано на
// слици. 

// #include <stdio.h>

// int main(void)
// {
//     printf("%c\n%2c\n%3c\n%4c\n%5c",'A','B','C','D','E');
// }

// Саставити програм који омогућује унос три знаковне променљиве са тастатуре, а затим
// приказује њихове вредности и њихов одговарајући АSCII код. 

// #include <stdio.h>

// int main(void)
// {
//     char a,b,c;
//     printf("Unesite tri znakovne promenljive: ");
//     scanf("%c %c %c",&a,&b,&c);
//     printf("%c:%d\n%c:%d\n%c:%d",a,a,b,b,c,c);
// }

// Саставити програм који омогућује унос једне знаковне променљиве, приказује њену вредност
// и њен ASCII код, а затим у следећа три реда приказује променљиве чији је код за један већи од
// претходне.

// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     printf("Unesite jednu znakovnu promenljivu: ");
//     scanf("%c",&ch);
//     printf("%c:%d\n%c:%d\n%c:%d\n%c:%d",ch,ch,ch+1,ch+1,ch+2,ch+2,ch+3,ch+3);
// }

/*Саставити програм који приказује величину у бајтовима следећих типова података: char,
unsigned char, int, unsigned int, long, unsigned long, float, double. */

// #include <stdio.h>

// int main(void)
// {
//     printf("%d",sizeof(float));
// }

/*Саставити програм којим се замењују вредности два унета цела броја. */

// #include <stdio.h>

// int main(void)
// {
//     int a,b;
//     printf("Unesite dve celobrojne promenljive: ");
//     scanf("%d %d",&a,&b);
//     printf("Pre zamene: a = %d, b = %d\n",a,b);
//     int pom = a;
//     a = b;
//     b = pom;
//     printf("Posle zamene: a = %d, b = %d",a,b);
// }

/*Саставити програм који учитава два цела броја са тастатуре и исписује њихов збир */

// #include <stdio.h>

// int main(void)
// {
//     int a,b;
//     printf("Unesite dve celobrojne promenljive a i b: ");
//     scanf("%d %d",&a,&b);
//     printf("Zbir dve unete promenljive je %d",a+b);
// }

/*Саставити програм који учитава два цела броја и исписује њихов збир, разлику, производ,
целобројни количник, реални количник и остатак при целобројном дељењу. 
*/

// #include <stdio.h>

// int main(void)
// {
//     int a,b;
//     printf("Unesite dve celobrojne promenljive a i b: ");
//     scanf("%d %d",&a,&b);
//     printf("Zbir dve promenljive je %d\n",a+b);
//     printf("Razlika dve promenljive je %d\n",a-b);
//     printf("Proizvod dve promenljive %d\n",a*b);
//     printf("Celobrojni kolicnik dve promenljive %d\n",a/b);
//     printf("Realni kolicnik dve promenljive %.2f\n",(float)a/b);
//     printf("Ostatak pri celobrojnom deljenju %d",a%b);
// }

// Саставити програм који за унете странице правоугаоника исписује његов обим и површину. 

// #include <stdio.h>

// int main(void)
// {
//     int a,b;
//     printf("Unesite a i b stranice pravugaonika: ");
//     scanf("%d %d",&a,&b);
//     printf("Obim pravugaonika je %dcm\n",2*a+2*b);
//     printf("Povrsina pravugaonika je %dcm",a*b);
// }

//Саставити програм којим се вредност темепературе унете у Фаренхајтима приказује у
// Целзијусима 

// #include <stdio.h>

// int main(void)
// {
//     int F,C;
//     printf("Unesite temperaturu u Farehajtovima: ");
//     scanf("%d",&F);
//     C = (5.0/9) * (F-32);
//     printf("Farenhajt:%d\nCelzijus:%d",F,C);
// }

// Саставити програм за решавање линеарне једначине AX+B=0, где се коефицијенти А и В
// уносе са тастатуре (А≠0).

// #include <stdio.h>

// int main(void)
// {
//     float a,b,x;
//     printf("Unesite koeficijente a i b: ");
//     scanf("%f %f",&a,&b);
//     x = -b/a;
//     printf("Resenje linearne jednacine %fX + %f = 0, x = %f",a,b,x);
// }

/*Саставити програм за рачунање израза 2 3
y = x + x + x за унету вредност х. */

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int x;
//     float y;
//     printf("Unesite vrednost x: ");
//     scanf("%d",&x);
//     y = sqrt(x + x*x + x*x*x);
//     printf("Resenje izraza je %.2f",y);
// }

// Саставити програм који за унети троцифрени број исписује његове цифре и суму цифара

// #include <stdio.h>

// int main(void)
// {
//     int x;
//     printf("Unesite trocifren broj x: ");
//     scanf("%d",&x);
//     int a = x/100;
//     int b = (x%100)/10;
//     int c = (x%100)%10;
//     printf("Cifre trocifrenog broja su %d %d %d\n",a,b,c);
//     printf("Suma cifara trocifrenog broja je %d",a+b+c);
// }

// Саставити програм који учитава вредност производа у динарима, а затим израчунава и
// приказује колико је потребно новчаница од 500 дин., 100 дин. и 1 дин. за плаћање тог производа. 

// #include <stdio.h>

// int main(void)
// {
//     int cena;
//     printf("Unesite cenu proizvoda: ");
//     scanf("%d",&cena);
//     int nov500 = cena/500;
//     int nov100 = (cena%500)/100;
//     int nov1 = (cena%500)%100;
//     printf("Za placanje proizvoda po ceni od %d dinara, potrebno je:\n",cena);
//     printf("%d novcanica od 500 dinara.\n%d novcanica od 100 dinara\n%d novcanica od 1 dinar.",nov500,nov100,nov1);
// }

// Саставити програм који за унети временски интервал у секундама и исписује га у облику
// дани : часови : минуте : секунде

// #include <stdio.h>
// int main(void)
// {
//     int sekunde;
//     printf("Unesite interval u sekundama: ");
//     scanf("%d",&sekunde);
//     int sec = sekunde%60;
//     int minuti = sekunde/60;
//     int sati = minuti/60;
//     minuti = minuti % 60;
//     int dani = sati/24;
//     sati = sati% 24;

//     printf("Interval od %d sekundi iznosi:\n",sekunde);
//     printf("%dd : %dh : %dmin : %dsec",dani,sati,minuti,sec);
// }

// 1.	Napisati program kojim se k-ta vrsta matrice A uređuje rastuće. Učitavanje matrice i traženu obradu realizovati pomoću odvojenih potprograma

#include <stdio.h>
void unos(int matrica[100][100],int n);
void sortiranje(int matrica[100][100],int n,int k);
void ispis(int matrica[100][100],int n);
int main(void)
{   
    int matrica[100][100],n,k;
    printf("Unesite n vrsta i kolona matrice: ");
    scanf("%d",&n);
    unos(matrica,n);
    printf("Koju zelite k-vrstu matrice sortirati: ");
    scanf("%d",&k);
    sortiranje(matrica,n,k-1);
    ispis(matrica,n);
}
void unos(int matrica[100][100],int n)
{
    for(int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        scanf("%d",&matrica[i][j]);
    }

}
}

void sortiranje(int matrica[100][100],int n,int k)
{
    for(int i = 0;i<n-1;i++)
    {
        for (int j =1;j<n;j++)
        {
            if (matrica[k][i]>matrica[k][j])
        {
            int temp = matrica[k][i];
            matrica[k][i] = matrica[k][j];
            matrica[k][j] = temp;
        }
        }
        
    }
   
}

void ispis(int matrica[100][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }
}