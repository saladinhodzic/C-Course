// Stringovi

// stdio.h- getchar(), putchar(c), gets(s), puts(s)

// puts() nam printa string
// gets() je input za string
// strlen() za duzinu stringa

#include <stdio.h>
#include <string.h>
#include <ctype.h>
// int main(){
//     char prvoIme[15],drugoIme[15];
//     printf("Unesite ime ");
//     gets(prvoIme);
//     int n=strlen(prvoIme);
//     printf("Uneto ime ima %d karaktera\n",n);
//     strcpy(drugoIme,prvoIme);
//     printf("Kopija imena" );
//     puts(drugoIme);
//     // touppercase

//     int i;
//     for(i=0;i!= '\0';i++){
//         char v= toupper(drugoIme[i]);
//         printf("%c",v);

//     }
//     return 0;
// }

// Koliko se puta slovo 'a' nalazi u tekstu

// int brojPonavljanja(char tekst[],char karakter){
//     int br=0,i;
//     for(i=0;i<strlen(tekst);i++){
//         if(tekst[i]==karakter){
//             br++;
//         }
//     }
//     return br;
// }

// int main(){
//     int brojac,i;
//     char tekst[15],karakter;
//     gets(tekst);
//     scanf("%c",&karakter);
//     brojac=brojPonavljanja(tekst,karakter);

//     printf("Broj ponvaljanja slova a je %d",brojac);
//     return 0;
// }

// funkcija koja gleda koji karakter se najvise pojavljuje

// char funkcija(char tekst[]){
//     int br,i,j,p,max=0;
//     char c;

//     for(i=0;i<strlen(tekst);i++){
//         p=0;
//         for (j=i+1;j<strlen(tekst);j++){
//             if (tekst[i]==tekst[j]){
//                 p=1;
//                 break;
//             }
//         }
//         if(p==0){
//             br=0;
//             for(j=0;j<=i;j++){
//                 if(tekst[i]==tekst[j]){
//                     br++;
//                 }
//             }
//             if(br>max){
//                 max=br;
//                 c=tekst[i];
//             }
//         }
//     }
//     return c;
// }

// napisati funkciju koliko ima reci uneti tekst

// int func(char tekst[]){
//     int br=0,i;

//     for(i=0;i<strlen(tekst);i++){
//         if(tekst[i]==' ' && tekst[i+1]==' '){
//             br++;
//         }
//     }
//     return br;
// }

// palindrom

// void palindrom(char tekst[]){
//     int i,p=0;

//     for ( i=0;i<strlen(tekst)/2;i++){
//         if (tekst[i]==tekst[strlen(tekst)-1-i]){
//             p=1;
//         }
//     }
//     if (p=1){
//         printf("Rec je palindrom");
//     }
// }
// int main(){
//     char tekst[100];
//     gets(tekst);
//     palindrom(tekst);

//     return 0;
// }