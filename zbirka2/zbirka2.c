/*Саставити програм који за унети цео број n исписује одговарајуће поглавље дате књиге.
Књига има следећа поглавља: Operatori, Ciklusi, Skokovi, Karakteri, Nizovi,
Matrice, Stringovi, Pokazivaci, Strukture, Datoteke. 
*/

// #include <stdio.h>

// int main(void)
// {
//     char knjiga[100][100] = {"Operatori","Ciklusi","Skokovi","Karakteri","Nizovi","Matrice","Stringovi","Pokazivaci","Strukture","Datoteke"};
//     int n;
//     printf("Unesite poglavlje n (1-10): ");
//     scanf("%d",&n);
//     printf("%s",knjiga[n-1]);
// }

/*Саставити програм за одређивање дужине унетог стринга (без null карактера):
a) без употребе уграђене функције strlen();
б) употребом уграђене функције strlen();
в) саставити програм за одређивање који је дужи од два задата стринга (без null карактера)
употребом уграђене функције strlen(); 
*/

// #include <stdio.h>

// a)

// int main(void)
// {
//     char str[]="Cao";
//     int length = sizeof(str) - 1;
//     printf("%d",length);
// }

// b)
// #include <string.h>
// int main(void)
// {
//     char str[] = "cao";
//     int length = strlen(str);
//     printf("%d",length);
// }

// v)

// #include <string.h>

// int main(void)
// {
//     char str1[] = "cao cao";
//     char str2[] = "cao";
//     if(strlen(str1)>strlen(str2))
//     {
//         printf("Prvi string je duzi.");
//     }else
//     {
//         printf("Drugi string je duzi.");
//     }
// }

/*Саставити програм који врши:
а) поређење два задата стринга помоћу функције strcmp().
б) првих n карактера два стринга помоћу функције strncmp(). */

#include <stdio.h>
#include <string.h>
// a)
// int main(void)
// {
//     char str1[100];
//     char str2[100];
//     printf("Unesite prvi string:\n");
//     fgets(str1,100,stdin);
//     printf("Unesite drugi strin:\n");
//     fgets(str2,100,stdin);
//     if(strcmp(str1,str2) > 0)
//     {
//         printf("Prvi string je veci");
//     }else if (strcmp(str1,str2)<0)
//     {
//         printf("Drugi string je veci");
//     }else
//     {
//         printf("Stringovi su identicni");
//     }
// }

int main(void)
{
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    int n;
    printf("Unesite prvih n karaktera za poredjenje: ");
    scanf("%d",&n);
    if(strncmp(str1,str2,n)>0)
    {
        printf("Prvi string je veci");
    }else if(strncmp(str1,str2,n)<0)
    {
        printf("Drugi string je veci");
    }else
    {
        printf("Prvih n znakova su identicni");
    }
}