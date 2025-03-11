// reversing a string
#include <stdio.h>
int main(void)
{
    char string[15] = "Hello, World";
    int i,length = 0;
    //getting the length of the string
    for (i=0;string[i]!= '\0';i++)
    {
        length++;
    }
    for(i=0;i<length/2;i++)
    {
        char temp = string[i];
        string[i] = string[length-1-i];
        string[length-1-i] = temp;
    }
    printf("%s",string);
}