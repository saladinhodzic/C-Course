// STRINGS

// Building simple string

#include <stdio.h>
#include <string.h>
int main(void)
{
    // creating string using char keyword
    char string[]="Hello World!";
    printf("%s\n",string);
    // looping through string
    int i;
    int length=sizeof(string)/sizeof(char);
    for(i=0;i<length;i++)
    {
        printf("%c",string[i]);
    }
    // another way of creating strings
    // \0 tells computer that its end of string
    char string2[]={'h','e','l','l','o','\0'};
    printf("%s\n",string2);
    // if we want to output double quotes inside string use \""
    char string3[]="She says \"Its very nice outside\"";
    printf("%s",string3);

    // some functions available using <string.h> library

    // length of string - strlen(string)

    printf("Length of \"%s\" is %d\n",string3,strlen(string3));

    // concatenate string - strcat(str1,str2)

    printf(strcat(string,string2));

    // compare strings - strcmp(str1,str2) 
    // If they are equal it returns 0 

    printf("%d",strcmp(string,string2));

    // scaning strings - can scan without & but not more than one word also need to specify length of string
    char string4[50];
    printf("\nUnesite neki string: ");
    // scanf("%s",string4);
    // printf("%s",string4);

    // for scaning multiple words use - fgets(name,size,stdin)
    char name[100];
    printf("\nUnesite vase ime i prezime: ");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
}