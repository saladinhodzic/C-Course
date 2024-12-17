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

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100]="12.34nesto";
    int wholeInt=atoi(str);
    printf("%d\n",wholeInt);

    float decimalFloat=atof(str);
    printf("%f",decimalFloat);
}