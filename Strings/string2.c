// Exercises

// Compare two strings to see which is larger and print it

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[]="Veoma je lepo danas.";
    char str2[]="Nije bilo lose danas.";

    if (strcmp(str1,str2)==0)
    {
        printf("Stringovi su iste velicine.");
    }
    else if(strcmp(str1,str2)>0)
    {
        printf("Prvi string je veci.");
    }else
    {
        printf("Drugi string je veci.");
    }
    return 0;
}