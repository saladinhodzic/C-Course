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

// #include <stdio.h>
// void unos(int matrica[100][100],int n);
// void sortiranje(int matrica[100][100],int n,int k);
// void ispis(int matrica[100][100],int n);
// int main(void)
// {   
//     int matrica[100][100],n,k;
//     printf("Unesite n vrsta i kolona matrice: ");
//     scanf("%d",&n);
//     unos(matrica,n);
//     printf("Koju zelite k-vrstu matrice sortirati: ");
//     scanf("%d",&k);
//     sortiranje(matrica,n,k-1);
//     ispis(matrica,n);
// }
// void unos(int matrica[100][100],int n)
// {
//     for(int i=0;i<n;i++)
// {
//     for (int j=0;j<n;j++)
//     {
//         scanf("%d",&matrica[i][j]);
//     }

// }
// }

// void sortiranje(int matrica[100][100],int n,int k)
// {
//     for(int i = 0;i<n-1;i++)
//     {
//         for (int j =1;j<n;j++)
//         {
//             if (matrica[k][i]>matrica[k][j])
//         {
//             int temp = matrica[k][i];
//             matrica[k][i] = matrica[k][j];
//             matrica[k][j] = temp;
//         }
//         }
        
//     }
   
// }

// void ispis(int matrica[100][100],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j =0;j<n;j++)
//         {
//             printf("%d ",matrica[i][j]);
//         }
//         printf("\n");
//     }
// }

/*2.	Napisati program kojim se određuje da li je matrica A savršena. Matrica je savršena ako je suma elemenata svake vrste veća od nule. Za određivanje sume elemenata u vrsti napraviti funkciju. Učitavanje matrice A uraditi pomoću potprograma.*/

// #include <stdio.h>
// int odredi_sume(int matrica[100][100],int n,int m);
// void unos(int matrica[100][100],int n,int m);

// int main(void)
// {
//     int matrica[100][100], n,m;
//     printf("Unesite nxm dimenzije matrice: ");
//     scanf("%d %d",&n,&m);
//     unos(matrica,n,m);
//     int savrsena = odredi_sume(matrica,n,m);
//     if (savrsena == 1)
//     {
//         printf("Matrica je savrsena!");
//         return 0;
//     }
//     printf("Matrica nije savrsena!");
//     return 1;
// }

// void unos(int matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("Unesite element %d vrste %d kolone matrice: ",i,j);
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// int odredi_sume(int matrica[100][100],int n,int m)
// {
//     int check = 1,i,j;
//     for(i=0;i<n;i++){
//         int suma = 0;
//         for(j=0;j<m;j++)
//         {
//             suma+= matrica[i][j];
//         }
//         if (suma <= 0)
//         {
//             check = 0;
//             return check;
//         }
//     }
//     return check;
// }

/*3.	Napisati program kojim se na izlazu ispisuje 1 ako u svakoj koloni matrice postoji broj b. Za ispitivanje napraviti funkciju. Učitavanje matrice A uraditi pomoću potprograma. */

// #include <stdio.h>

// int ispitivanje(int matrica[100][100],int n,int m, int b);
// void unos(int matrica[100][100],int n, int m);

// int main(void)
// {
//     int matrica[100][100], n, m,  b;
//     printf("Unesite nxm dimenzije matrice: ");
//     scanf("%d %d",&n,&m);
//     unos(matrica,n,m);
//     printf("Unesite broj b za ispitivanje: ");
//     scanf("%d",&b);
//     int check = ispitivanje(matrica,n,m,b);
//     if (check == 1)
//     {
//         printf("1");
//         return 0;
//     }
// }

// void unos(int matrica[100][100],int n, int m)
// {
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++)
//         {
//             printf("Unesite element %d vrste %d kolone matrice: ",i,j);
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// int ispitivanje(int matrica[100][100],int n,int m, int b)
// {
//     int check=1,i,j;
//     for(i=0;i<n;i++)
//     {
//         int tempCheck=0;
//         for(j=0;j<m;j++)
//         {
//             if(matrica[j][i] == b)
//             {
//                 tempCheck = 1;
//                 break;
//             }
//         }
//         if (tempCheck != 1)
//         {
//             check = 0;
//             break;
//         }
//     }
//     return check;
// }

/*4.	Napisati program kojim se na izlazu ispisuje 1 ako je A>B, gde su A i B matrice. A>B ako je suma elemenata matrice A veća od sume elemenata matrice B. Za određivanje sume elemenata matrice napraviti funkciju.Za određivanje da li je A veće od B napraviti funkciju. */

// #include <stdio.h>
// void unos(int matrica[100][100],int n,int m);
// int sume(int m1[100][100],int m2[100][100],int n,int m);
// int main(void)
// {
//     int matrica1[100][100],matrica2[100][100],n,m;
//     printf("Unesite dimenzije dve matrice nxm: ");
//     scanf("%d %d",&n,&m);
//     printf("Unesite elemente prve matrice:\n");
//     unos(matrica1,n,m);
//     printf("Unesite elemente druge matrice:\n");
//     unos(matrica2,n,m);
//     int check = sume(matrica1,matrica2,n,m);
//     if (check == 1)
//     {
//         printf("1");
//     }
// }

// void unos(int matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// int sume(int m1[100][100],int m2[100][100],int n,int m)
// {
//     int suma1 = 0,suma2 = 0,i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             suma1 += m1[i][j];
//             suma2 += m2[i][j];
//         }
//     }
//     if (suma1 > suma2)
//     {
//         return 1;
//     }
// }

/*5.	Napisati program kojim se na osnovu matrice A pravi niz B tako da je svaki element niza B indeks najvećeg element odgovarajuće vrste matrice A. Učitavanje niza A, formiranje niza B i ispis niza B realizovati pomoću odvojenih potprograma. */

// #include <stdio.h>
// void unosMatrice(int matrica[100][100],int n,int m);
// void unosNiza(int matrica[100][100],int niz[100],int n,int m);
// void ispis(int niz[100],int n);
// int main(void)
// {
//     int matrica[100][100],niz[100], n, m;
//     printf("Unesite dimenzije matrice nxm: ");
//     scanf("%d %d",&n,&m);
//     printf("Unesite elemente matrice:\n");
//     unosMatrice(matrica,n,m);
//     unosNiza(matrica,niz,n,m);
//     ispis(niz,n);
// }

// void unosMatrice(int matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// void unosNiza(int matrica[100][100],int niz[100],int n,int m)
// {
//     int index = 0,i,j;
//     for(i=0;i<n;i++)
//     {   
//         int max = 0;
//         for(j=1;j<m;j++)
//         {
//             if (matrica[i][j]>matrica[i][j-1])
//             {
//                 max = j;
//             }
//         }
//         niz[index] = max;
//         index++;
//     }
// }

// void ispis(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",niz[i]);
//     }
// }

/*6.	Napisati program kojim se na osnovu matrice A pravi niz B tako da je svaki element niza B proizvod najvećeg i najmanjeg elementa odgovarajuće vrste matrice A. Učitavanje niza A, formiranje niza B i ispis niza B realizovati pomoću odvojenih potprograma. */

// #include <stdio.h>
// void unos(int matrica[100][100],int n,int m);
// void unosNiza(int matrica[100][100],int niz[100],int n,int m);
// void ispis(int niz[100],int n);

// int main(void)
// {
//     int matrica[100][100], niz[100], n , m;
//     printf("Unesite dimenzije matrice nxm: ");
//     scanf("%d %d",&n,&m);
//     printf("Unesite elemente matrice: ");
//     unos(matrica,n,m);
//     unosNiza(matrica,niz,n,m);
//     printf("Novi niz izgleda ovako:\n");
//     ispis(niz,n);
// }

// void unos(int matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// void unosNiza(int matrica[100][100],int niz[100],int n,int m)
// {
//     int index = 0,i,j;
//     for(i=0;i<n;i++)
//     {
//         int min = matrica[i][0];
//         int max = matrica[i][0];
//         for(j=1;j<m;j++)
//         {
//             if (matrica[i][j]> max)
//             {
//                 max = matrica[i][j];
//             }else if (matrica[i][j]< min)
//             {
//                 min = matrica[i][j];
//             }
//         }
//         niz[index] = max * min;
//         index++;
//     }
// }

// void ispis(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",niz[i]);
//     }
// }

/*7.	Napisati program kojim se na osnovu matrice A pravi niz B tako da je svaki element niza B: 1 ukoliko je suma elemenata odgovarajuće vrste matrice A veća od nule 0 ukoliko je suma elemenata odgovarajuće vrste matrice A manja od nule. Učitavanje niza A, formiranje niza B i ispis niza B realizovati pomoću odvojenih potprograma. */

// #include <stdio.h>

// void unosMatrice(int matrica[100][100],int n,int m);
// void formirajNiz(int matrica[100][100],int niz[100],int n,int m);
// void ispisNiz(int niz[100],int n);

// int main(void)
// {
//     int matrica[100][100],niz[100],n,m;
//     printf("Unesite dimenzije matrice nxm: ");
//     scanf("%d %d",&n,&m);
//     printf("Unesite elemente matrice:\n");
//     unosMatrice(matrica,n,m);
//     formirajNiz(matrica,niz,n,m);
//     printf("Formirani niz na osnovu matrice glasi:\n");
//     ispisNiz(niz,n);
// }

// void unosMatrice(int matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// void formirajNiz(int matrica[100][100],int niz[100],int n,int m)
// {
//     int index = 0,i,j;
//     for(i=0;i<n;i++)
//     {
//         int suma = 0;
//         for(j=0;j<m;j++)
//         {
//             suma += matrica[i][j];
//         }

//         if (suma > 0)
//         {
//             niz[index] = 1;
//         }else{
//             niz[index] = 0;
//         }
//         index++;
//     }
// }

// void ispisNiz(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",niz[i]);
//     }
// }

/*8.	Napisati program koji na osnovu datog niza realnih brojeva X formira novi niz Y koji sadrži elemente niza X koji su manji od srednje vrednosti niza X. Ispisati elemente niza Y. Učitavanje niza X, formiranje niza Y i ispis niza Y realizovati pomoću odvojenih potprograma. */
// #include <stdio.h>
// void unosX(float niz[100],int n);
// void formirajY(float nizX[100],float nizY[100],int n,int* length);
// void ispis(float niz[100],int n);

// int main(void)
// {
//     float nizX[100], nizY[100];
//     int n;
//     printf("Unesite duzinu niza X: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza X:\n");
//     unosX(nizX,n);
//     int length = 0;
//     formirajY(nizX,nizY,n,&length);
//     printf("Formirani niz Y glasi:\n");
//     ispis(nizY,length);
// }

// void unosX(float niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&niz[i]);
//     }
// }

// void formirajY(float nizX[100],float nizY[100],int n,int* length)
// {
//     float srednja = 0;
//     int i,index = 0;

//     for(i=0;i<n;i++)
//     {
//         srednja += nizX[i];
//     }
//     srednja = srednja / n;

//     for(i=0;i<n;i++)
//     {
//         if(nizX[i]<srednja)
//         {
//             nizY[index] = nizX[i];
//             (*length)++;
//             index++;
//         }
//     }
// }

// void ispis(float niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%.2f ",niz[i]);
//     }
// }

/*10.	Napisati program koji na osnovu datog niza X formira novi niz Y tako da Y sadrži samo različite elemente niza X. Ispisati elemente niza Y. Učitavanje niza X, formiranje niza Y i ispis niza Y realizovati pomoću odvojenih potprograma. */

// #include <stdio.h>
// void unosX(int niz[100],int n);
// void unosY(int nizX[100],int nizY[100],int n,int * length);
// void ispis(int niz[100],int n);

// int main(void)
// {
//     int nizX[100],nizY[100],n;
//     printf("Unesite duzinu niza X: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza X:\n");
//     unosX(nizX,n);
//     int length = 0;
//     unosY(nizX,nizY,n,&length);
//     ispis(nizY,length);
// }

// void unosX(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// void unosY(int nizX[100],int nizY[100],int n,int * length)
// {
//     int i,index = 0;
//     for(i=0;i<n;i++)
//     {   
//         int check = 1;
//         for (int j = index;j>=0;j--)
//         {
//             if (nizX[i] == nizY[j])
//             {
//                 check = 0;
//             }
//         }
//         if (check == 1)
//         {
//             nizY[index] = nizX[i];
//             (*length)++;
//             index++;
//         }
//     }
// }

// void ispis(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",niz[i]);
//     }
// }

/*9.	Napisati program koji na osnovu date matrice realnih brojeva X formira novu matricu Y koja sadrži elemente matrice X koji su deljivi sa 2, a kod kojih je zbir indeksa jednak 3. Ispisati elemente matrice Y. Učitavanje matrice X, formiranje matrice Y i ispis matrice Y realizovati pomoću odvojenih potprograma. */

// #include <stdio.h>

// void unosX(float matrica[100][100],int n,int m);
// void formirajY(float X[100][100], float Y[100],int n,int m,int *length);
// void ispis(float niz[100],int n);

// int main(void)
// {
//     float matrica[100][100],niz[100];
//     int n,m;
//     printf("Unesite dimenzije matrice nxm: ");
//     scanf("%d %d",&n,&m);
//     printf("Unesite elemente matrice:\n");
//     unosX(matrica,n,m);
//     int length = 0;
//     formirajY(matrica,niz,n,m,&length);
//     printf("Novi niz Y:\n");
//     ispis(niz,length);
// }

// void unosX(float matrica[100][100],int n,int m)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%f",&matrica[i][j]);
//         }
//     }
// }

// void formirajY(float X[100][100], float Y[100],int n,int m,int *length)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if (i + j == 3)
//             {
//                 if ((int)X[i][j]%2 == 0)
//                 {
//                     Y[*length] = X[i][j];
//                     (*length)++;
//                 }
//             }
//         }
//     }
// }

// void ispis(float niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%.2f ",niz[i]);
//     }
// }

/*11.	Napisati program kojim se određuje najveći negativni element niza X. Koristiti odgovarajuću funkciju. */

// #include <stdio.h>
// void unos(int niz[100],int n);
// int negativni(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza n: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     printf("Najveci negativni element niza je %d",negativni(niz,n));
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// int negativni(int niz[100],int n)
// {
//     int i;
//     int negativni = niz[0];
//     for(i=1;i<n;i++)
//     {
//         if(niz[i] < 0 && negativni >= 0)
//         {
//             negativni = niz[i];
//         }else if(niz[i]<0 && niz[i]>negativni)
//         {
//             negativni = niz[i];
//         }
//     }
//     return negativni;
// }

/*12.	Napisati program kojim se određuje najmanji pozitivni element niza X. Koristiti odgovarajuću funkciju. */

// #include <stdio.h>

// void unos(int niz[100],int n);
// int pozitivni(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     printf("Najmanji pozitivni element niza je %d",pozitivni(niz,n));
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// int pozitivni(int niz[100],int n)
// {
//     int i, pozitivni = niz[0];
    
//     for(i=0;i<n;i++)
//     {
//         if(niz[i] > 0 && pozitivni <=0)
//         {
//             pozitivni = niz[i];
//         }else if(niz[i]>0 && niz[i]<pozitivni)
//         {
//             pozitivni = niz[i];
//         }
//     }
//     return pozitivni;
// }

/*13.	Napisati program kojim se određuje suma pozitivnih elemenata niza X koji su deljivi sa 7. Određivanje sume uraditi pomoću funkcije. */

// #include <stdio.h>
// void unos(int niz[100],int n);
// int suma(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     printf("Suma elemenata niza deljivih sa 7 je %d",suma(niz,n));
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// int suma(int niz[100],int n)
// {
//     int suma = 0,i;
//     for(i=0;i<n;i++)
//     {
//         if (niz[i] % 7 == 0)
//         {
//             suma+= niz[i];
//         }
//     }
//     return suma;
// }

/*14.	Napisati program kojim se određuje suma negativnih elemenata niza X koji su deljivi sa 3. Određivanje sume uraditi pomoću funkcije. */

// #include <stdio.h>
// void unos(int niz[100],int n);
// int suma(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     printf("Suma negativnih elemenata niza deljivih sa 3 je %d",suma(niz,n));
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// int suma(int niz[100],int n)
// {
//     int suma = 0,i;
//     for(i=0;i<n;i++)
//     {
//         if(niz[i]< 0 && niz[i]%3 == 0)
//         {
//             suma += niz[i];
//         }
//     }
//     return suma;
// }

/*15.	Napisati program kojim se određuje suma minimalnog i maksimalnog elementa niza X. Određivanje sume uraditi pomoću funkcije. */

// #include <stdio.h>
// void unos(int niz[100],int n);
// int suma(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     printf("Suma najmanjeg i najveceg elementa niza je %d",suma(niz,n));
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// int suma(int niz[100],int n)
// {
//     int i,suma = 0;
//     int min = niz[0],max = niz[0];
//     for(i=1;i<n;i++)
//     {
//         if(niz[i] > max)
//         {
//             max = niz[i];
//         }else if(niz[i]<min)
//         {
//             min = niz[i];
//         }
//     }
//     suma += min + max;
//     return suma;
// }

/*16.	Napisati program kojim se iz datog niza celih brojeva X izbacuje maksimalni element. Nije dozvoljeno korišćenje pomoćnog niza. */

// #include <stdio.h>
// void unos(int niz[100],int n);
// void izbacivanje(int niz[100],int n,int * brojac);
// void ispis(int niz[100],int n);

// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite elemente niza:\n");
//     unos(niz,n);
//     int brojac = 0;
//     izbacivanje(niz,n,&brojac);
//     printf("Niz posle izbacivanja maksimalnog elementa glasi:\n");
//     ispis(niz,brojac);
// }

// void unos(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// void izbacivanje(int niz[100],int n,int * brojac)
// {
//     int i, max = niz[0];
//     // nalazenje maksimalnog elementa niza
//     for(i=1;i<n;i++)
//     {
//         if(niz[i]>max)
//         {
//             max = niz[i];
//         }
//     }

//     for(i=0;i<n;i++)
//     {
//         if (niz[i] != max)
//         {
//             niz[*brojac] = niz[i];
//             (*brojac)++;
//         }
//     }
// }

// void ispis(int niz[100],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",niz[i]);
//     }
// }

/*17.	Napisati program kojim se u niz X umeće broj b neposredno iza minimalnog elementa niza. Nije dozvoljeno korišćenje pomoćnog niza.  */
#include <stdio.h>
void unos(int niz[100],int n);
void umetanje(int niz[100],int* n,int b);
void ispis(int niz[100],int n);

int main(void)
{
    int niz[100],n,b;
    printf("Unesite duzinu niza: ");
    scanf("%d",&n);
    printf("Unesite elemente niza:\n");
    unos(niz,n);
    printf("Unesite broj za umetanje: ");
    scanf("%d",&b);
    umetanje(niz,&n,b);
    printf("Novi niz glasi: \n");
    ispis(niz,n);
}

void unos(int niz[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&niz[i]);
    }
}

void umetanje(int niz[100],int* n,int b)
{
    int i,min = niz[0],min_index = 0;
    // nalazenje minimalnog elementa niza
    for(i=1;i<*n;i++)
    {
        if (niz[i]< min)
        {
            min = niz[i];
            min_index = i;
        }
    }
    for(i=*n;i>min_index;i--)
    {
        niz[i] = niz[i-1];
    }

    niz[min_index+1] = b;

    (*n)++;
}

void ispis(int niz[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",niz[i]);
    }
}