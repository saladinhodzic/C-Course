// MEMORY ADDRESS & POINTERS

#include <stdio.h>

int main(void)
{
    // Memory address represents where in the memory is the variable stored
    int broj = 40;
    int broj2 = 40;
    printf("%p %p\n",&broj,&broj2);
    
    // Pointer is a variable which saves address of another variable

    int* adresa=&broj;
    printf("%p\n",adresa);

    // We can also see the actual numbers that pointer is saving

    printf("%d\n",*adresa);

    // We can also use pointers to access arrays
    // Pointer to an array is actually as pointing to a first element in array
    int arr[5]={1,2,3,4,5};
    printf("%d",*arr);
}