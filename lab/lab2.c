// Dat je prirodan broj k. Napisati program kojim se određuje koja se cifra nalazi na k-toj poziciji niza:
// 110100100010000100000
// U kome su redom dopisivani brojevi 1, 10, 100, 1000, 10000...

// KORACI:

// GENERISATI NIZ CIFARA 1101001000

// NACI ZA UNETI BROJ K ODGOVARAJACU CIFRU U NIZU

// #include <stdio.h>
// #include <math.h>

// int generate(int niz[],int length,int noviNiz[]){
//     int i,acc,j,m=1,k;
//     noviNiz[100];
//     for(i=0;i<length;i++){
//         acc=round(pow(10,i));
//         niz[i]=acc;
//     }
//     for (j=0;j<length;j++){
//         while(niz[j]>0){
//             int remainder=niz[j]%10;
//             niz[j]/=10;
//             noviNiz[m]=remainder;
//             m++;
//         }
//     }
//     return noviNiz;
// }

// int main(){
//     int niz[10],i,noviNiz[100]={1};
//     int length=sizeof(niz)/sizeof(niz[0]);
//     generate(niz,length,noviNiz);


//     int pozicija;
//     printf("Unesite neki indeks i mi cemo ti vratiti cifru sa tog indeksa\n");
//     scanf("%d",&pozicija);

//     for(i=0;i<length;i++){
//         if (i==pozicija){
//             printf("Na %d. poziciji se nalazi cifra %d.",pozicija,noviNiz[i]);
//         }
//     }

    
//     return 0;
// }


// Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине
// n) целих бројева. 

// #include <stdio.h>

// int main(){
//     int niz[100],i,suma=0;
//     int n;
//     printf("Izaberi duzinu niza\n");
//     scanf("%d",&n);
//     // int length=sizeof(niz)/4;
//     // for (i=0;i<length;i++){
//     //     suma+=niz[i];
//     // }
//     for (i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//         suma+=niz[i];
//     }
//     // float result=suma/length;
//     printf("Aritmeticka sredina brojeva niza je %.2f",(float) suma/n);
//     return 0;
// }

// Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуеј
// аритметичку средину оних елемената низа који су дељиви са 3.

// #include <stdio.h>

// int main(){
//     int niz[100],n,i,k,brojac=0,suma=0;

//     printf("Uneti duzinu niza n\n");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("Uneti %d. cifru niza: ",i+1);
//         scanf("%d",&niz[i]);
//     }

//     for (k=0;k<n;k++){
//         if (niz[k]%3==0){
//             suma+=niz[k];
//             brojac++;
//         }
//     }


//     printf("Aritmeticka sredina brojeva niza koji su deljivi sa 3 je %.2f",(float)suma/brojac);
//     return 0;
// }

// Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
// а) суму парних и суму непарних бројева;
// б) суму елемената са парним индексима и суму елемената са непарним индексима. 

// #include <stdio.h>

// int main(){
//     // uneti niz sa duzinom n brojeva
//     int niz[100],n,i;

//     printf("Uneti duzinu niza n: ");
//     scanf("%d",&n);

//     for (i=0;i<n;i++){
//         printf("Uneti %d. cifru niza: ",i+1);
//         scanf("%d",&niz[i]);
//     }
//     // naci sumu parnih i sumu neparnih brojeva niza

//     int parni=0,neparni=0;

//     for(i=0;i<n;i++){
//         if (niz[i]%2==0){
//             parni+=niz[i];
//         }else{
//             neparni+=niz[i];
//         }
//     }

//     printf("Suma parnih brojeva je %d a neparnih je %d.",parni,neparni);

//     int parniInd=0,neparniInd=0;
    
//     for(i=0;i<n;i++){
//         if(i==0 || i%2==0){
//             parniInd+=niz[i];
//         }
//         else{
//             neparniInd+=niz[i];
//         }
//     }

//     printf("Na parnim pozicijama niza suma brojeva je %d a na neparnim %d.",parniInd,neparniInd);
//     return 0;
// }

// Саставити програм који прочита два низа, дужине n, са реалним компонентама,
// A A A A = ( 1 2 , ,..., n ) и B B B B = ( 1 2 , ,..., n ) израчунава њихов скаларни производ
// 1
// 0
// n
// i i
// i
// s A B
// −
// =
// = ∑ и
// исписује добијени резултат. 

// #include <stdio.h>

// int main()
// {
//     int niz1[100],niz2[100],n,i,suma=0;
//     printf("Uneti duzinu oba niza n: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++)
//     {
//         printf("Uneti %d. element prvog niza: ",i+1);
//         scanf("%d",&niz1[i]);
//     }
//     for (i=0;i<n;i++)
//     {
//         printf("Uneti %d. element drugog niza: ",i+1);
//         scanf("%d",&niz2[i]);
//     }

//     for(i=0;i<n;i++)
//     {
//         suma+=niz1[i]+niz2[i];
//     }

//     printf("%d",suma);
//     return 0;
// }

// Саставити програм који учита елементе низа A A A A = ( 1 2 , ,..., n ) дужине n и низа
// B B B B = ( 1 2 , ,..., m ) дужине m и спаја у један низ C A A A B B B = ( 1 2 1 2 , ,..., , , ,..., n m ) дужине n+m.
// Исписати новокреирани низ. 

// #include <stdio.h>

// int main()
// {
//     int niz1[100],niz2[100],niz3[100],n,m,i;
//     // ucitati dva niza sa duzinom m i n
//     printf("Uneti duzinu prvog niza n: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("Uneti %d. element prvog niza: ",i+1);
//         scanf("%d",&niz1[i]);
//     }
//     printf("Uneti duzinu drugog niza m: ");
//     scanf("%d",&m);

//     for(i=0;i<m;i++)
//     {
//         printf("Uneti %d. element drugog niza: ",i+1);
//         scanf("%d",&niz2[i]);
//     }

//     for(i=0;i<n+m;i++)
//     {
//         if(i<n)
//         {
//         niz3[i]=niz1[i];
//         }
//         else 
//         {

//         niz3[i]=niz2[i-n];
//         }
//     }
//     printf("Spojeni niz je\n");
//     for(i=0;i<m+n;i++)
//     {
//         printf("%d, ",niz3[i]);
//     }
//     return 0;
// }

// Саставити програм који учита елементе два низа низа дужине n A A A A = ( 1 2 , ,..., n ) и
// B B B B = ( 1 2 , ,..., n ) и формира и исписује нови низ чији су елементи
// C A B A B A B = + + + ( 1 1 2 2 , ,..., n n ).

// #include <stdio.h>

// int ucitaj(int niz[],int duzina);
// int formiraj(int C[],int duzinaA,int duzinaB,int A[],int B[]);
// void ispisi(int niz[],int duzinaA,int duzinaB);

// int main()
// {
//     // ucitati dva niza A i B duzine n i m

//     int A[100],B[100],C[100],n,m,i;
//     printf("Unesite duzinu prvog niza: ");
//     scanf("%d",&n);
//     printf("Unesite duzinu drugog niza: ");
//     scanf("%d",&m);
//     ucitaj(A,n);
//     ucitaj(B,m);
//     // ucitaj(B,m);

//     // formirati novi niz ciji su elementi A1 + B1 = C1...
//     formiraj(C,n,m,A,B);

//     // ispisi novi niz C

//     ispisi(C,n,m);
// }

// int ucitaj(int niz[],int duzina)
// {
//     int i;

//     for (i=0;i<duzina;i++)
//     {
//         printf("Unesi %d. element niza: ",i+1);
//         scanf("%d",&niz[i]);
//     }

//     return niz;
// }

// int formiraj(int C[],int duzinaA,int duzinaB,int A[],int B[])
// {
//     // duzina C niza
//     int duzina=duzinaA > duzinaB? duzinaA:duzinaB;
//     int manjaDuzina=duzinaA < duzinaB? duzinaA:duzinaB;
//     int i=0,j;

//     while (i<manjaDuzina)
//     {
//         C[i]=A[i]+B[i];
//         i++;
//     }
//     if (duzinaA>duzinaB)
//     {
//         for(j=i;j<duzina;j++)
//         {
//             C[j]=A[j];
//         }
//     }else
//     {
//         for(j=i;j<duzina;j++)
//         {
//             C[j]=B[j];
//         }
//     }
//     return C;
// }

// void ispisi(int niz[],int duzinaA,int duzinaB)
// {
//     int i;

//     int duzina=duzinaA > duzinaB? duzinaA:duzinaB;


//     for(i=0;i<duzina;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// Саставити програм за формирање низа С од два задата низа реалних бројева А и В (сваки
// дужине 5) на следећи начин
// ( )3
// 2
// 3
// i
// i i i
// A
// C A B = + . Исписати низ С.

// #include <stdio.h>

// int main(void)
// {
//     float A[100],B[100],C[100];
//     int n = 5,i;

//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&A[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&B[i]);
//     }

//     for(i=0;i<n;i++)
//     {
//         C[i]=pow(A[i],3)/3 + 2*A[i]*B[i];
//         printf("%.2f, ",C[i]);
//     }


//     return 0;
// }

// Nactraj

#include <stdio.h>

int main(void)
{
    int width,height,i,j;
    // uneti visinu i sirinu
    printf("Uneti sirinu: ");
    scanf("%d",&width);
    printf("Uneti visinu: ");
    scanf("%d",&height);

    for(i=0;i<width;i++)
    {
        printf(" _");
    }
    for(j=0;j<height;j++)
        {
            printf("\n|");
            for(i=0;i<width;i++)
            {
                if (j==height-1)
                {
                for(i=0;i<width;i++)
                    {
                    printf(" _");
                    }
                 }else{

                printf("  ");
                 }

            }
            printf("|");

            
        }
   
    return 0;
}