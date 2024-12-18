// Exercises

// Compare two strings to see which is larger and print it

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[]="Veoma je lepo danas.";
//     char str2[]="Nije bilo lose danas.";

//     if (strcmp(str1,str2)==0)
//     {
//         printf("Stringovi su iste velicine.");
//     }
//     else if(strcmp(str1,str2)>0)
//     {
//         printf("Prvi string je veci.");
//     }else
//     {
//         printf("Drugi string je veci.");
//     }
//     return 0;
// }

// Саставити програм који:
// а) копира један стринг у други (од почетка другог стринга) помоћу функције strcpy().
// б) копира првих n карактера једног стринга у други (од почетка другог стринга) помоћу функције
// strncpy(). 

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[100]="Hello!";
//     char str2[100];
//     // copies whole str1 into str2
//     strcpy(str2,str1);
//     printf("%s\n",str2);
//     // copies n characters of str3 into str4
//     char str3[100]="Hello World!";
//     char str4[100];
//     strncpy(str4,str3,5);
//     printf("%s",str4);
// }

// Саставити програм који:
// а) копира један стринг у продужетку постојећег садржаја другог стринга помоћу функције strcat();
// б) копира првих n карактера од једног стринга у други, у продужетку постојећег садржаја другог
// стринга помоћу функције strncat(). 

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[100]="Hello";
//     char str2[100]="World";
//     // concatenate two strings
//     strcat(str1,str2);
//     printf("%s",str1);
//     // concatenate n characters of str4 into str3
//     char str3[100]="My name is ";
//     char str4[100]="Saladin";
//     strncat(str3,str4,5);
//     printf("%s",str3);
// }

// Саставити програм који конвертује стринг у цео и реалан број (ако је могуће) употребом
// уграђених функција atoi() и аtof(). Исписати резултате.

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char str[100]="12.34nesto";
//     int wholeInt=atoi(str);
//     printf("%d\n",wholeInt);

//     float decimalFloat=atof(str);
//     printf("%f",decimalFloat);
// }

// Саставити програм који симулира калкулатор са четири основне аритметичке операције над
// реалним бројевима. Бројеви са улаза се прихватају као стрингови. Програм треба да обрађује
// произвољан број комплета све док не на улазу не прочита уместо броја слово. Исписати резултат
// операције. 

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {   
//     int check=1;
//     while (check!=0)
//     {

//     char prviBroj[100];
//     char drugiBroj[100];
//     int znak;
//     printf("Unesite prvi broj: ");
//     gets(prviBroj);
//     printf("Unesite drugi broj: ");
//     gets(drugiBroj);
//     printf("Unesite aritmeticku operaciju: ");

//     znak=getchar();

//     float noviBroj1=atof(prviBroj);
//     float noviBroj2=atof(drugiBroj);
    
//     switch(znak)
//     {
//         case '+':
//             printf("%.2f\n",noviBroj1 + noviBroj2);
//             break;
//         case '-':
//             printf("%.2f\n",noviBroj1 - noviBroj2);
//             break;
//         case '*':
//             printf("%.2f\n",noviBroj1 * noviBroj2);
//             break;
//         case '/':
//             printf("%.2f\n",noviBroj1 / noviBroj2);
//             break;
//     }
//     }   
// }

// Саставити функцију за испис ниске карактера, а затим је тестирати у главном програму. 

// #include <stdio.h>
// #include <string.h>
// void print(char string[]);
// int main(void)
// {
//     char string[100];
//     gets(string);
//     print(string);
// }

// void print(char string[])
// {
//     int i;
//     int length=strlen(string);

//     for(i=0;i<length;i++)
//     {
//         printf("%c",string[i]);
//     }
// }

// Саставити функцију за учитавање једне речи, а затим је тестирати у главном програму. 

// #include <stdio.h>
// void generateString(char string[]);
// int main(void)
// {
//     char string[100];
//     generateString(string);
//     printf("%s",string);
// }

// void generateString(char string[])
// {
//     printf("Unesite neku rec: ");
//     gets(string);
// }

// Саставити функцију која:
// а) израчунава дужину стринга;
// б) копира стринг ѕ2 у стринг ѕ1, претпоставља да у ѕ1 има довољно простора;
// в) надовезује стринг ѕ2 на крај стринга ѕ1, претпоставља да у ѕ1 има довољно простора
// г) врши лексикографско поређење два стринга, враћа: 0 - уколико су стрингови једнаки, <0 -
// уколико је ѕ1 лексикографски испред ѕ2, >0 - уколико је ѕ1 лексикографски иза ѕ2;
// д) проналази прву позицију карактера с у стрингу ѕ, враћа позицију на којој је с, односно -1 уколико
// ѕ не садржи с; 

// #include <stdio.h>
// void length(char string[]);
// void copy(char string[]);
// int main(void)
// {
//     char string[100]="Hello World!";
//     printf("%s",string);
//     length(string);
//     copy(string);
// }

// void length(char string[])
// {
//     int i=0,brojac=0;
//     while (string[i]!='\0')
//     {
//         brojac++;
//         i++;
//     }
//     printf("Duzina stringa je %d\n",brojac);
// }

// void copy(char string[])
// {
//     int i;
//     char noviString[100];
//     for(i=0;string[i]!='\0';i++)
//     {
//         noviString[i]=string[i];
//     }
//     printf("Kopirani string je %s\n",noviString);
// }

// Саставити програм који ће исписати колико се пута унети знак појављује у учитаном
// стрингу. 

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[]="Hello World!";
//     printf("Unesite slovo za pretrazivanje: ");
//     char slovo=getchar();
//     int brojac=0;
//     for(int i=0;i<strlen(string);i++)
//     {
//         if (string[i]==slovo)
//         {
//             brojac++;
//         }
//     }
//     printf("Slvo %c se nalazi %d puta u stringu.",slovo,brojac);
// }

// Саставити програм који ће исписати колико речи има учитана реченица

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char string[100];
//     int brojac=0;
//     printf("Unesite recenicu ");
//     gets(string);
//     for(int i=0;i<strlen(string);i++)
//     {
//         if (string[i] == ' ')
//         {
//             brojac++;
//         }
//     }
//     printf("Uneta recenica ima %d reci.",brojac+1);
// }

// Саставити програм који у задатом стрингу исписује дужину најдужег низа узастопно
// једнаких знакова. Исписати тај низ.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[]="Pooozdravv svimaaaaaaa!";
    int max=0;

    for(int i=0;i<strlen(string);i++)
    {
        int brojac=1;
        int j=i+1;
        while(string[i]==string[j])
        {
            brojac++;
            j++;
        }
        if (brojac>max)
        {
            max=brojac;
        }
    }
    printf("Najduzi podniz u stringu iznosi %d puta",max);
}