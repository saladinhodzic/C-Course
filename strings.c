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
    return 0;
}