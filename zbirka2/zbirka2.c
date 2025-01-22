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

// #include <stdio.h>
// #include <string.h>
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

// int main(void)
// {
//     char str1[100],str2[100];
//     fgets(str1,100,stdin);
//     fgets(str2,100,stdin);
//     int n;
//     printf("Unesite prvih n karaktera za poredjenje: ");
//     scanf("%d",&n);
//     if(strncmp(str1,str2,n)>0)
//     {
//         printf("Prvi string je veci");
//     }else if(strncmp(str1,str2,n)<0)
//     {
//         printf("Drugi string je veci");
//     }else
//     {
//         printf("Prvih n znakova su identicni");
//     }
// }

/*0. Саставити програм који:
а) копира један стринг у други (од почетка другог стринга) помоћу функције strcpy().
б) копира првих n карактера једног стринга у други (од почетка другог стринга) помоћу функције
strncpy(). */

// #include <stdio.h>
// #include <string.h>
// a)
// int main(void)
// {
//     char str1[] = "Zdravo";
//     char str2[10];
//     strcpy(str2,str1);
//     puts(str2);
// }

// b)

// int main(void)
// {
//     char str[] = "Zdravo";
//     char str2[10];
//     int n;
//     printf("Unesite n karaktera za kopiranje: ");
//     scanf("%d",&n);
//     strncpy(str2,str,n);
//     puts(str2);
// }

/*Саставити програм који:
а) копира један стринг у продужетку постојећег садржаја другог стринга помоћу функције strcat();
б) копира првих n карактера од једног стринга у други, у продужетку постојећег садржаја другог
стринга помоћу функције strncat(). 
*/

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[10] = "Zdravo";
//     char str2[10] = "Cao";
//     char str3[10]="hai";
//     strcat(str2,str);
//     strncat(str3,str2,1);
//     puts(str2);
//     puts(str3);
// }

/*Саставити програм који конвертује стринг у цео и реалан број (ако је могуће) употребом
уграђених функција atoi() и аtof(). Исписати резултате. */

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char str[] = "1.3";
//     printf("Ceo broj %d, decimalan broj %.2f",atoi(str),atof(str));
// }

/*Саставити програм који симулира калкулатор са четири основне аритметичке операције над
реалним бројевима. Бројеви са улаза се прихватају као стрингови. Програм треба да обрађује
произвољан број комплета све док не на улазу не прочита уместо броја слово. Исписати резултат
операције. 
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
//     float prvi,drugi;
//     char str1[10],str2[10];
//     while(1)
//     {
//     printf("Unesite prvi broj: ");
//     fgets(str1,10,stdin);
//     printf("Unesite drugi broj: ");
//     fgets(str2,10,stdin);
//     if(!isdigit(str1[0]))
//     {
//         break;
//     }
//     prvi = atof(str1);
//     drugi= atof(str2);
//     int znak = getchar();
//     getchar();

//     switch(znak)
//     {
//         case '+':
//             printf("%.2f",prvi+drugi);
//             break;
//         case '-':
//             printf("%.2f",prvi - drugi);
//             break;
//         case '*':
//             printf("%.2f",prvi*drugi);
//             break;
//         case '/':
//             printf("%.2f",prvi/drugi);
//             break;
//     }
//     }
    

// }

/*Саставити функцију за учитавање једне речи, а затим је тестирати у главном програму.*/

// #include <stdio.h>
// #include <ctype.h>
// void unos(char rec[]);

// int main(void)
// {
//     char rec[100];
//     unos(rec);
//     puts(rec);
// }

// void unos(char rec[])
// {
//     int i=0,c;
//     while(!isspace(c=getchar()))
//     {
//         rec[i++] = c;
//     }
//     rec[i] = '\0';
// }

/*Саставити функцију која:
а) израчунава дужину стринга;
б) копира стринг ѕ2 у стринг ѕ1, претпоставља да у ѕ1 има довољно простора;
в) надовезује стринг ѕ2 на крај стринга ѕ1, претпоставља да у ѕ1 има довољно простора
г) врши лексикографско поређење два стринга, враћа: 0 - уколико су стрингови једнаки, <0 -
уколико је ѕ1 лексикографски испред ѕ2, >0 - уколико је ѕ1 лексикографски иза ѕ2;
д) проналази прву позицију карактера с у стрингу ѕ, враћа позицију на којој је с, односно -1 уколико
ѕ не садржи с; */
#include <stdio.h>
int duzina(char string[]);
void kopiranje(char string1[],char string2[],int* duzina);
void udruzivanje(char string1[],char string2[],int *duzina);
int poredjenje(char string1[],char string2[],int*duzina);
int index(char string[],int c);

int main(void)
{
    char string1[50]="C",string2[]= "Zdravo";
    int duzina1 = duzina(string1);
    int duzina2 = duzina(string2);
    printf("Duzina prvog stringa %d, duzina drugog stringa %d\n",duzina1,duzina2);
    kopiranje(string1,string2,&duzina1);
    printf("Kopirani prvi string glasi:\n");
    puts(string1);
    udruzivanje(string1,string2,&duzina1);
    printf("Udruzeni prvi string:\n");
    puts(string1);
    int check = poredjenje(string1,string2,&duzina1);
    if (check > 0)
    {
        printf("Prvi string je veci.\n");
    }else if (check<0)
    {
        printf("Drugi string je veci.\n");
    }else
    {
        printf("Stringovi su identicni.\n");
    }
    printf("Unesite karakter za pretrazivanje: ");
    int c = getchar();
    while(getchar() != '\n');
    printf("Karakter %c se nalazi na %d mestu stringa.",c,index(string1,c));
}

int duzina(char string[])
{
    int length = 0,i;
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

void kopiranje(char string1[],char string2[],int*duzina)
{
    int i;
    for(i=0;string2[i]!='\0';i++)
    {
        string1[i]= string2[i];
    }
    string1[i] = '\0';
    *duzina=i;
}

void udruzivanje(char string1[],char string2[],int *duzina)
{
    int i;
    for(i=0;string2[i]!='\0';i++)
    {
        string1[*duzina+i] = string2[i];
    }
    string1[*duzina+i] = '\0';
    *duzina += i;

}

int poredjenje(char string1[],char string2[],int* duzina)
{
    int i;
    int znak1 = 0,znak2=0;
    for(i=0;i<*duzina;i++)
    {
         znak1+=string1[i];
         znak2 += string2[i];
        
    }
    if(znak1 > znak2)
        {
            return 1;
        }else if (znak2 > znak1)
        {
            return -1;
        }else
        {
            return 0;
        }
}

int index(char string[],int c)
{
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i] == c)
        {
            return i;
        }
    }
    return -1;
}