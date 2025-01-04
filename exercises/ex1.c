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

// #include <stdio.h>

// int main(void)
// {
//     int arr[100];
//     int n;
//     printf("Enter n values for array: ");
//     scanf("%d",&n);
//     for (int i = 0;i< n;i++)
//     {
//         printf("Enter %d. element of array: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = n - 1;i>=0;i--)
//     {
//         printf("%d ",arr[i]);
//     }
// }

// 3. Write a program in C to find the sum of all elements of the array.

// #include <stdio.h>

// int main(void)
// {
//     int arr[100];
//     int n;
//     int suma = 0;
//     printf("Enter the length of array: ");
//     scanf("%d",&n);
//     for (int i=0;i<n;i++)
//     {
//         printf("Enter %d. element of array: ",i+1);
//         scanf("%d",&arr[i]);
//         suma+=arr[i];
//     }

//     printf("The sum of all elements of the array is %d",suma);
// }

// 4. Write a program in C to copy the elements of one array into another array.

// #include <stdio.h>
// int main(void)
// {
//     int arr[100];
//     int n;
//     printf("Enter the number n of values in array: ");
//     scanf("%d",&n);

//     for (int i =0;i<n;i++)
//     {
//         printf("Enter %d. element of array: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int arr2[100];
//     // copying
//     for (int i=0;i<n;i++)
//     {
//         arr2[i] = arr[i];
//     }
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ",arr2[i]);
//     }
// }

// 6. Write a program in C to print all unique elements in an array.

// #include <stdio.h>

// int main(void)
// {
//     int arr[100] = {1,2,2,4};
//     int n = 4;

//     for (int i = 0;i<n;i++)
//     {
//         int check = 1;
//         for (int j = 0;j<n;j++)
//         {
//             if (i != j)
//             {
//                 if (arr[i] == arr[j])
//                 {   
//                     check = 0;
//                     break;
//                 }
//             }
            
//         }
//         if (check == 1)
//             {
//                 printf("%d ",arr[i]);
//             }
//     }
// }

// 7. Write a program in C to merge two arrays of the same size sorted in descending order.

// #include <stdio.h>

// int main(void)
// {
//     int arr1[100],arr2[100],n;
//     printf("Enter the length n of two arrays: ");
//     scanf("%d",&n);

//     // inputing the two arrays
//     for(int i=0;i<n;i++){
//         printf("Enter the %d. number of array: ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("Enter the %d. number of array: ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     int merged[100];
//     // merging the two arrays
//     for (int i=0;i<n;i++)
//     {
//         merged[i] = arr1[i];
//     }
//     int brojac =0;
//     for (int i=n;i<n*2;i++)
//     {
        
//         merged[i] = arr2[brojac];
//         brojac++;
//     }
//     // sorting the merged array
//     for(int i = 0;i<n*2-1;i++)
//     {
//         for (int j = i+1;j<n*2;j++)
//         {
//             if (merged[j]>=merged[i])
//             {
//                 int pom = merged[i];
//                 merged[i] = merged[j];
//                 merged[j] = pom;
//             }

//         }
//     }

//     for(int i=0;i<n*2;i++){
//         printf("%d ",merged[i]);
//     }
// }

// 8. Write a program in C to count the frequency of each element of an array.

#include <stdio.h>

int main(void)
{
    int arr[100],n;
    printf("Enter the length n of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the %d. number of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    int check[100];

    for(int i=0;i<n;i++)
    {
        check[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        if (check[i] == 0)
        {
        int brojac = 1;
        for (int j=i+1;j<n;j++)
        {

            if (arr[i] == arr[j])
            {
                check[j] = 1;
                brojac++;
            }

        }
        printf("%d occurs %d in array.",arr[i],brojac);
        }
        
    }
}