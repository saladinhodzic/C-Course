// 1. Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9

// #include <stdio.h>

// int main(void)
// {
//     int arr[100];

//     for (int i = 0; i < 10 ;i++)
//     {
//         printf("Unesite %d element niza: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 10 ;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

//2. Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    printf("Enter n values for array: ");
    scanf("%d",&n);
    for (int i = 0;i< n;i++)
    {
        printf("Enter %d. element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = n - 1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }


}