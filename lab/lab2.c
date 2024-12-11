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

// #include <stdio.h>

// int main(void)
// {
//     int width,height,i,j;
//     // uneti visinu i sirinu
//     printf("Uneti sirinu: ");
//     scanf("%d",&width);
//     printf("Uneti visinu: ");
//     scanf("%d",&height);

//     for(i=0;i<width;i++)
//     {
//         printf(" _");
//     }
//     for(j=0;j<height;j++)
//         {
//             printf("\n|");
//             for(i=0;i<width;i++)
//             {
//                 if (j==height-1)
//                 {
//                 for(i=0;i<width;i++)
//                     {
//                     printf(" _");
//                     }
//                  }else{

//                 printf("  ");
//                  }

//             }
//             printf("|");

            
//         }
   
//     return 0;
// }

// Саставити програм за формирање низа С од два задата низа целих бројева А и В (сваки
// дужине 5) на следећи начин: А[0]+B[4],…,A[4]+B[0]. Исписати низ С

// #include <stdio.h>

// int kreiraj(int niz[],int duzina);
// void ispisi(int niz[],int duzina);
// int formirajC(int A[],int B[],int C[],int duzina);

// int main(void)
// {
//     int A[5],B[5],n=5,C[5];
//     printf("Uneti elemente prvog niza\n");
//     kreiraj(A,n);

//     printf("Uneti elemente drugog niza\n");
//     kreiraj(B,n);

//     ispisi(A,n);
//     ispisi(B,n);
//     formirajC(A,B,C,n);
//     ispisi(C,n);
//     return 0;
// }

// int kreiraj(int niz[],int duzina)
// {
//     int i;
//     for(i=0;i<duzina;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void ispisi(int niz[],int duzina)
// {
//     int i;
//     for(i=0;i<duzina;i++)
//     {
//         printf("%d",niz[i]);
//     }
// }

// int formirajC(int A[],int B[],int C[],int duzina)
// {
//     int i;
//     for(i=0;i<duzina;i++)
//     {
//         C[i]=A[i]+B[duzina-i-1];
//     }
//     return C;
// }

// Саставити функцију за израчунавање скаларног производа два низа реалних бројева
// 1
// 0
// n
// i i
// i
// s A B
// −
// =
// = ∑ , а затим саставити главни програм који ће учитати два низа једнаких дужина n и
// применом формирани функције исписати скаларни производ два низа. 

// #include <stdio.h>

// int proizvod(int A[],int B[],int duzina);

// int main(void)
// {
//     int A[100],B[100],n,i;

//     printf("Uneti duzinu nizeva: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&A[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&B[i]);
//     }

//     printf("%d",proizvod(A,B,n));

    
//     return 0;
// }

// int proizvod(int A[],int B[],int duzina)
// {
//     int i,suma=0;
//     for(i=0;i<duzina;i++)
//     {
//         suma+=A[i]*B[i];
//     }
//     return suma;
// }

// Саставити функцију која генерише првих n чланова Фибоначијевог низа и функцију која
// исписује чланове низа, а затим те функције тестирати у главном програму. 

// #include <stdio.h>

// void fibonacijevNiz(int n);

// int main(void)
// {
//     int n;
//     printf("Unesite duzinu fibonacijevog niza: ");
//     scanf("%d",&n);
//     fibonacijevNiz(n);
//     return 0;
// }

// void fibonacijevNiz(int n)
// {
//     int i,a=0,b=1,c;
//     for(i=0;i<n;i++)
//     {
//         if(i==0)
//         {
//             printf("%d, ",i);
//         }else if(i==1)
//         {
//             printf("%d, ",i);
//         }else
//         {
//             c=a+b;
//             printf("%d, ",c);
//             a=b;
//             b=c;
//         }
//     }
// }

// Саставити рекурзивну функцију за израчунавање скаларног производа два низа реалних
// бројева
// 1
// 0
// n
// i i
// i
// s A B
// −
// =
// = ∑ , а затим саставити главни програм који ће учитати два низа једнаких дужина n и
// применом формирани функције исписати скаларни производ два низа. 

// #include <stdio.h>
// int proizvodRekurzija(int A[],int B[],int duzina);

// int main(void)
// {
//     int n,A[100],B[100],i;
//     printf("Unesite duzinu oba niza: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&A[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&B[i]);
//     }

//     printf("%d",proizvodRekurzija(A,B,n));

//     return 0;
// }
// int proizvodRekurzija(int A[],int B[],int duzina)
// {
//     return duzina>0 ? A[0]*B[0]+proizvodRekurzija(A+1,B+1,duzina-1) : 0;
// }



// Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
// вредности, као и његове позиције у низу

// #include <stdio.h>

// void max(int niz[],int n);

// int main(void)
// {
//     int niz[100],n,i;
//     printf("Uneti duzinu niza: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     max(niz,n);
//     return 0;
// }

// void max(int niz[],int n)
// {
//     int i,max=niz[0],index=0;

//     for(i=1;i<n;i++)
//     {
//         if(max<niz[i])
//         {
//             max=niz[i];
//             index=i;
//         }
//     }

//     printf("Najveci element u nizu je %d sa indeksom %d",max,index);
// }

// Саставити програм који учита низ реалних бројева, дужине n, налази најмањи и највећи члан
// низа, xmin и xmax, и исписује све елементе низа који су мањи од xmax/2 и већи од xmin*2

// #include <stdio.h>
// int generate_array(float niz[],int n);
// void min_max(float niz[],int n);

// int main(void)
// {
//     int n;
//     float niz[100];

//     printf("Unesite duzinu niza ");
//     scanf("%d",&n);
//     // generisanje niza realnih brojeva
//     generate_array(niz,n);

//     // nalazenje najmanjeg i najveceg clana niza
//     min_max(niz,n);
    
//     return 0;
// }

// int generate_array(float niz[],int n)
// {
//     int i;

//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&niz[i]);
//     }
//     return niz;
// }

// void min_max(float niz[],int n)
// {
//     int i;
//     float min=niz[0],max=niz[0];

//     for(i=0;i<n;i++)
//     {
//         if (min>niz[i])
//         {
//             min=niz[i];
//         }
//         if (max<niz[i])
//         {
//             max=niz[i];
//         }
//     }
//     printf("Najveci element niza je %.2f a najmanji %.2f\n",max,min);

//     for (i=0;i<n;i++)
//     {
//         if (min * 2 <niz[i] && max / 2 > niz[i])
//         {
//             printf("%.2f ",niz[i]);
//         } 
//     }
// }

// Саставити програм који за унети низ целих бројева, дужине n, исписује елемент најмање
// вредности међу парним бројевима

// #include <stdio.h>
// int generate(int niz[],int n);
// void smallest(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza ");
//     scanf("%d",&n);
//     // generating array of integers length n
//     generate(niz,n);

//     // print smallest even integer
//     smallest(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void smallest(int niz[],int n)
// {
//     int i,min;

//     for(i=0;i<n;i++)
//     {   
//         if (min>niz[i] && niz[i]%2==0)
//         {
//             min=niz[i];
//         }
//     }
//     printf("Smallest even number is %d",min);
// }

// Саставити програм који за унети низ целих бројева, дужине n, проналази и на екрану
// исписује елементе на парним позицијама и међу њима проналази онај који има максималну
// вредност. Минимална дужина низа је 2.

// #include <stdio.h>
// int generate(int niz[],int n);
// void even_positions(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     // generate array of integers
//     generate(niz,n);
//     // find elements on even index and print them also find max value from them
//     even_positions(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {   
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void even_positions(int niz[],int n)
// {
//     int i,max=0;
//     for(i=0;i<n;i++)
//     {
//         if (i%2==0)
//         {
//             if (max<niz[i])
//             {
//                 max=niz[i];
//             }
//         printf("%d, ",niz[i]);
//         }
//     }
//     printf("\nNajveca vrednost na parnom indeksu je %d",max);
// }

// Саставити програм који за унети низ целих бројева, дужине n, проналази позицију траженог
// елемента или исписује обавештење да тражени елемент не постоји у низу. Користити методу
// Линеарног претраживања:
// а) без употреба функција;
// б) коршћењем функције која линеарно претражује низ. 

// #include <stdio.h>
// void trazi(int element,int niz[],int n);
// int main(void)
// {
//     int niz[100],n,i;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);

//     printf("Unesite elemente niza: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }

//     int trazeni_element;
//     printf("Unesite broj koji trazite: ");
//     scanf("%d",&trazeni_element);

//     trazi(trazeni_element,niz,n);
//     return 0;
// }

// // (b) funkcija za trazenje datog elementa

// void trazi(int element,int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         if(niz[i]==element)
//         {
//             printf("Trazeni element se nalazi na %d. poziciji niza.",i);
//             break;
//         }
//         if (i==n-1)
//         {
//             printf("Trazeni element se ne nalazi u nizu!");

//         }
//     }
// }

// Саставити програм који за унети низ целих бројева, дужине n, проналази позицију траженог
// елемента или исписује обавештење да тражени елемент не постоји у низу. Претпоставља се да је низ
// уређен у растућем поретку. Користити методу Бинарног претраживања:
// а) без употреба функција;
// б) коршћењем функције која бинарно претражује низ;
// в) коршћењем рекурзивне функције која бинарно претражује низ.
// Метода Бинарне претраге:
// Нека је дат низ a[0], a[1], …, a[n-1] и вредност елемента који се тражи b. Најпре се b са
// средњим елементом низа (или елементом око средине). Ако су једнаки, претраживање је завршено.
// Ако је b мање од средњег елемента, тада се претраживање наставља у левој половини низа, а
// супротно у десну. У изабраној половини се примењује исти алгоритам. 

// #include <stdio.h>
// int generate(int niz[],int n);
// void find_element(int element,int niz[],int n);
// int main(void)
// {
//     int niz[100],n,element;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     // generate array of integers
//     generate(niz,n);
//     // find element using binary method

//     printf("Unesite element za trazenje: ");
//     scanf("%d",&element);
//     find_element(element,niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void find_element(int element,int niz[],int n)
// {
//     int i;
//     int srednjiElement=niz[n/2];

//     if (srednjiElement==element)
//     {
//         printf("Element se nalazi na %d. poziciji niza.",n/2);
//     }else if(element<srednjiElement)
//     {
//         for(i=srednjiElement;i>=0;i--)
//         {
//             if (niz[i]==element)
//             {
//                 printf("Trazeni element se nalazi na %d. poziciji leve polovine niza.",i);
//             }
//         }
//     }else
//     {
//         for(i=srednjiElement;i<n;i++)
//         {
//             if(niz[i]==element)
//             {
//                 printf("Trazeni element se nalazi na %d. poziciji desne polovine niza.",i);
//             }
//         }
//     }
// }

// Саставити програм за циклично премештање елемената задатог низа целих бројева дужине n
// за једно место у лево и исписивање новодобијеног низа. 

// #include <stdio.h>
// const int length=5;
// void move_elements(int niz[],int noviNiz[]);
// int main(void)
// {

//     int niz[100]={1,2,3,4,5};
//     int noviNiz[100];
//     // move elements for one position to the left (1,2,3,4,5 => 2,3,4,5,1)
//     move_elements(niz,noviNiz);
//     return 0;
// }

// void move_elements(int niz[],int noviNiz[])
// {
//     int i;

//     for(i=length-1;i>=0;i--)
//     {
//         noviNiz[i]=niz[i+1];
//         if (i==length-1)
//         {
//             noviNiz[i]=niz[0];
//         }
//     }

//     for(i=0;i<length;i++)
//     {
//         printf("%d, ",noviNiz[i]);
//     }
// }

// Саставити програм који за унети низ целих бројева дужине n врши ротирање чланова низа за
// x места у лево и исписује новодбијени низ. 

// #include <stdio.h>
// int generate(int niz[],int n);
// void printArr(int niz[],int n);
// int rotate(int niz[],int n,int position);
// int main(void)
// {
//     int niz[100],n;

//     printf("Uneti duzinu niza ");
//     scanf("%d",&n);
//     // generisanje niza
//     generate(niz,n);
    
//     int premestaj;
//     printf("Unesite rotaciju mesta x: ");
//     scanf("%d",&premestaj);

//     rotate(niz,n,premestaj);

//     printArr(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void printArr(int niz[],int n)
// {
//     int i;

//     for(i=0;i<n;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// int rotate(int niz[],int n,int position)
// {
//     int i,pom=niz[0];

//     if(position==0)
//     {
//         return niz;
//     }

//     for(i=1;i<n;i++)
//     {
//         niz[i-1]=niz[i];
//     }
//     niz[n-1]=pom;
//     return rotate(niz,n,position-1);
// }

// Саставити програм који за унети низ целих бројева дужине n врши замену суседних
// елемената низа на парним и непарним позицијама и исписује новодобијени низ. 

// #include <stdio.h>
// int generate(int niz[],int n);
// void rotate(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;

//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     generate(niz,n);

//     rotate(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void rotate(int niz[],int n)
// {
//     int i;

//     for(i=0;i<n;i++)
//     {
//         int pom=niz[i];
//         if(i%2==0)
//         {

//             niz[i]=niz[i+1];
//             niz[i+1]=pom;
//         }
//     }

//     for(i=0;i<n;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// Саставити програм који за унети низ целих бројева дужине n формира и приказује нови низ
// који је састављен од елемената без понављања унетог низа

// #include <stdio.h>
// int generate(int niz[],int n);
// void cleaning(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu ");
//     scanf("%d",&n);
//     generate(niz,n);
//     // clean array from duplicates
//     cleaning(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void cleaning(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {   
//         int brojac=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if (niz[i]==niz[j])
//             {
//                 brojac++;
//                 break;
//             }
//         }
//         if (brojac == 0)
//             {
//                 printf("%d, ",niz[i]);
//             }
//     }
// }

// Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
// методом избора (Selection Sort). Исписати сортирани низ.
// Selection Sort подразумева да минимални елемент низа размени са a[0], минимални елемент
// одсечка a[1], a[2], …, a[n-1] разменити са a[1], минимални елемент одсечка a[2], a[3], …, a[n-1]
// разменити са a[2]; исти поступак применити на преостале елементе осим последњег који се налази на
// свом месту

// #include <stdio.h>
// int generate(int niz[],int n);
// void sort(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Uneti duzinu niza: ");
//     scanf("%d",&n);
//     generate(niz,n);

//     sort(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void sort(int niz[],int n)
// {
//     int i,j;

//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if (niz[i]>niz[j])
//             {
//                 int pom = niz[i];
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//             }
//         }
//     }

//     printf("Sortiran niz je \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
// методом уметања (Insert Sort). Исписати сортирани низ.
// Insert Sort: Нека је првих k елемената већ уређено у неопадајућем поретку, тада се узима
// (k+1)-ви елемент и умеће на одговарајуће место међу првих k елемената тако да првих k+1
// елемената буде уређено. Овај се метод примењује за k од 0 до n-2. 

// #include <stdio.h>
// int generate(int niz[],int n);
// void insertSort(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     generate(niz,n);
//     insertSort(niz,n);
//     return 0;
// }

// int generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
//     return niz;
// }

// void insertSort(int niz[],int n)
// {
//     int i,j;
//     for(i=1;i<n;i++)
//     {
//         int pom = niz[i];
//        for (j=i-1;j>=0;j--)
//        {
//             if (pom<niz[j])
//             {

//                 niz[j+1]=niz[j];
//                 niz[j]=pom;
//             }else{
//                 break;
//             }
//        }
//     }

//     for( i=0;i<n;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
// методом мехурића (Bubble Sort). Исписати сортирани низ.
// Bubble Sort: Пролазимо кроз низ редом поредећи суседне елементе, и при том их замењујући
// ако су у погрешном поретку. Овим се највећи елемент попут мехурића истискује на "површину", тј.
// на крајњу десну позицију. Након тога је потребно овај поступак поновити над низом а[0],...,а[n-2], тј.
// над првих n-1 елемената низа без последњег који је постављен на праву позицију. Након тога се исти
// поступак понавља над све краћим и краћим префиксима низа, чиме се један по један истискују
// елемененти на своје праве позиције. 


// #include <stdio.h>
// void generate(int niz[],int n);
// void bubbleSort(int niz[],int n);
// int main(void)
// {
//     int niz[100],n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     generate(niz,n);
//     bubbleSort(niz,n);
//     return 0;
// }

// void generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// void bubbleSort(int niz[],int n)
// {
//     int i,j;

//     for(i=0;i<n-1;i++)
//     {
//         int pom=niz[i];
//         for(j=i+1;j<n;j++)
//         {
//             if (pom> niz[j])
//             {
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//                 pom=niz[i];
//             }

//         }
//     }

//     for(i=0;i<n;i++)
//     {
//         printf("%d, ",niz[i]);
//     }
// }

// . Саставити програм којим се у уређени низ бројева умеће нови број тако да низ и даље буде
// уређен. Исписати новодобијени низ. 

// #include <stdio.h>
// void generate(int niz[],int n);
// void sort(int niz[],int n,int noviBroj);
// int main(void)
// {   
//     int niz[100],n,noviBroj;
//     printf("Unesite duzinu niza: ");
//     scanf("%d",&n);
//     printf("Unesite niz u rastucem redosledu:\n");
//     generate(niz,n);

//     printf("Unesite broj za umetanje u niz: ");
//     scanf("%d",&noviBroj);
//     sort(niz,n,noviBroj);
//     return 0;
// }

// void generate(int niz[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&niz[i]);
//     }
// }

// void sort(int niz[],int n,int noviBroj)
// {
//     int noviNiz[100],i,brojac=0;

//     for(i=0;i<n;i++)
//     {
//         if (niz[i]<noviBroj)
//         {
//             noviNiz[brojac]=niz[i];
//             brojac++;
//         }
//     }
//         noviNiz[brojac]=noviBroj;

//     for(i=brojac;i<=n;i++)
//     {   
//         brojac++;
//         noviNiz[brojac]=niz[i];
//     }
//     for(i=0;i<brojac;i++)
//     {
//         printf("%d ",noviNiz[i]);
//     }

// }
// 1, 2, 4, 5  (3) => 1, 2, 3, 4, 5

// Саставити програм који учитава, а затим исписује елементе матрице mxn. Елементи матрице
// су цели бројеви. 

// #include <stdio.h>

// int main(void)
// {
//     int matrica[100][100];
//     int m=2,n=3;
//     matrica[m][n]={{1,2,3},{4,5,6}};
//     printf("%d\n",matrica[0][1]);
//     printf("%d",matrica[1][2]);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int matrica[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };
//     for (int i = 0; i < 2; i++) { // Iteracija kroz redove
//         for (int j = 0; j < 3; j++) { // Iteracija kroz kolone
//             printf("Element [%d][%d] = %d\n", i, j, matrica[i][j]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int i,j,m,n,matrica[100][100];
//     printf("Unesite m redova i n kolona: ");
//     scanf("%d %d",&m,&n);
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("Unesite %d. %d. element matrica ",i,j);
//             scanf("%d",&matrica[i][j]);
//         }
//     }

//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",matrica[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Саставити програм који за унету матрицу димензија nxn врши сабирање њених елеменета и
// исписује добијени резултат. Елементи су цели бројеви

// #include <stdio.h>

// int main(void)
// {
//     int i,j,n,matrica[100][100],suma=0;
//     printf("Unesite n redova i kolona matrice ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("Unesite %d. %d. element matrice ",i,j);
//             scanf("%d",&matrica[i][j]);
//             suma+=matrica[i][j];
//         }
//     }

// printf("Suma elemenata matrice je %d",suma);

//     return 0;
// }

// Саставити програм који учита две матрице целих бројева, a и b, обе димензија mхn, а затим
// врши сабирање ове две матрице и исписује нову матрицу с. Матрице се сабирају тако што се
// сабирају елементи матрица са истим индексима. 

// #include <stdio.h>
// void generate(int matrica[100][100],int m,int n);
// void sum(int C[100][100],int A[100][100],int B[100][100],int m,int n);
// int main(void)
// {
//     int m,n,A[100][100],B[100][100],C[100][100];
//     printf("Unesite m i n: ");
//     scanf("%d %d",&m,&n);

//     generate(A,m,n);
//     generate(B,m,n);

//     sum(C,A,B,m,n);
//     return 0;
// }

// void generate(int matrica[100][100],int m,int n)
// {
//     int i,j;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("Unesite %d. %d. element matrice\n",i,j);
//             scanf("%d",&matrica[i][j]);
//         }
//     }
// }

// void sum(int C[100][100],int A[100][100],int B[100][100],int m,int n)
// {
//     int i,j;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             C[i][j]=A[i][j]+B[i][j];
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",C[i][j]);
//         }
//     }
// }

// Definicija i upotreba:

// Napiši funkciju max2 koja prima dva cela broja i vraća veći od njih. Testiraj je u programu tako što ćeš uneti dva broja sa tastature.

// #include <stdio.h>
// int max2(int a,int b);
// int main(void)
// {
//     int a,b;
//     printf("Unesi a i b ");
//     scanf("%d %d",&a,&b);
//     int rezultat=max2(a,b);
//     printf("Veci broj je %d",rezultat);
//     return 0;
// }

// int max2(int a,int b)
// {
//     if (a>b)
//     {
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// Poziv funkcije:

// Implementiraj funkciju prostBroj koja proverava da li je zadati broj prost. Koristi ovu funkciju da pronađeš i ispišeš sve proste brojeve u opsegu od 1 do 100.

#include <stdio.h>
void prostBroj(int a);
int main(void)
{
    int a;
    printf("Unesite broj: ");
    scanf("%d",&a);
    printf("Prosti brojevi u opsegu od 1 do 100 su: \n");
    prostBroj(a);
    return 0;
}

void prostBroj(int a)
{
    int i,j;
    int checkOurs=0;
    for(i=2;i<=100;i++)
    {
    int check=0;
        for(j=i-1;j>1;j--)
        {
            if (i%i==0 && i%1==0 && i%j==0)
            {
                check=1;
            }
        }
        if (check == 0)
        {
            if(a==i)
            {
                checkOurs=1;
            }
            printf("%d ",i);
        }
        
    }
    if (checkOurs==1)
    {
                printf("Uneti broj je prost broj");

    }
}