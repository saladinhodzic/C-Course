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
// #include <stdio.h>
// int duzina(char string[]);
// void kopiranje(char string1[],char string2[],int* duzina);
// void udruzivanje(char string1[],char string2[],int *duzina);
// int poredjenje(char string1[],char string2[],int*duzina);
// int index(char string[],int c);

// int main(void)
// {
//     char string1[50]="C",string2[]= "Zdravo";
//     int duzina1 = duzina(string1);
//     int duzina2 = duzina(string2);
//     printf("Duzina prvog stringa %d, duzina drugog stringa %d\n",duzina1,duzina2);
//     kopiranje(string1,string2,&duzina1);
//     printf("Kopirani prvi string glasi:\n");
//     puts(string1);
//     udruzivanje(string1,string2,&duzina1);
//     printf("Udruzeni prvi string:\n");
//     puts(string1);
//     int check = poredjenje(string1,string2,&duzina1);
//     if (check > 0)
//     {
//         printf("Prvi string je veci.\n");
//     }else if (check<0)
//     {
//         printf("Drugi string je veci.\n");
//     }else
//     {
//         printf("Stringovi su identicni.\n");
//     }
//     printf("Unesite karakter za pretrazivanje: ");
//     int c = getchar();
//     while(getchar() != '\n');
//     printf("Karakter %c se nalazi na %d mestu stringa.",c,index(string1,c));
// }

// int duzina(char string[])
// {
//     int length = 0,i;
//     for(i=0;string[i]!='\0';i++)
//     {
//         length++;
//     }
//     return length;
// }

// void kopiranje(char string1[],char string2[],int*duzina)
// {
//     int i;
//     for(i=0;string2[i]!='\0';i++)
//     {
//         string1[i]= string2[i];
//     }
//     string1[i] = '\0';
//     *duzina=i;
// }

// void udruzivanje(char string1[],char string2[],int *duzina)
// {
//     int i;
//     for(i=0;string2[i]!='\0';i++)
//     {
//         string1[*duzina+i] = string2[i];
//     }
//     string1[*duzina+i] = '\0';
//     *duzina += i;

// }

// int poredjenje(char string1[],char string2[],int* duzina)
// {
//     int i;
//     int znak1 = 0,znak2=0;
//     for(i=0;i<*duzina;i++)
//     {
//          znak1+=string1[i];
//          znak2 += string2[i];
        
//     }
//     if(znak1 > znak2)
//         {
//             return 1;
//         }else if (znak2 > znak1)
//         {
//             return -1;
//         }else
//         {
//             return 0;
//         }
// }

// int index(char string[],int c)
// {
//     int i;
//     for(i=0;string[i]!='\0';i++)
//     {
//         if(string[i] == c)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

/*Саставити програм који у задатом стрингу исписује дужину најдужег низа узастопно једнаких знакова. Исписати тај низ*/

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char *str ="Caaaaaooo";
//     int length = 1;
//     int max = 0;
//     for(int i=1;str[i]!='\0';i++)
//     {
//         if(str[i] == str[i-1] )
//         {
//             length++;
//         }else{
//             max = length;
//             length = 1;
//         }
//     }
//         if(length>max)
//         {
//             max = length;
//         }
//     printf("Duzina najduzeg podstringa je %d",max);
// }

/*Саставити програм за одређивање најдужег и најкраћег реда од 20 задатих редова текста. STOP кôд при задавању редова текста може бити празан ред.*/

// #include <stdio.h>
// #include <string.h>
// #define MAX 20
// int main(void)
// {
//     char tekst[MAX][100];
//     int i=0;
//     int najkraci_ind=0,najduzi_ind=0;
//     while(i<MAX)
//     {
//         fgets(tekst[i],100,stdin);
//         if(strcmp(tekst[i],"\n") == 0)
//         {
//             break;
//         }

//         tekst[i][strcspn(tekst[i],"\n")] = '\0';

//         if(strlen(tekst[i])>strlen(tekst[najduzi_ind]))
//         {
//             najduzi_ind = i;
//         }else if(strlen(tekst[i])< strlen(tekst[najkraci_ind]))
//         {
//             najkraci_ind = i;
//         }
//         i++;
//     }
//     printf("Najduzi string se nalazi na %d mestu a najkraci na %d mestu",najduzi_ind+1,najkraci_ind+1);
// }

/*Саставити програм који у задатом стрингу (једна реч) врши конверзију свих малих слова у велика, а осатала не мења.*/

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[100] = "Zdravo";
//     strupr(str);
//     puts(str);
// }

/*Саставити програм који учитава стринг, који представља реченицу, и који проверава да ли је реченица исправно унета. Исправно унета реченица задовољава следеће услове: - реченица мора почети великим словом и завршити се тачком; - речи су произвољни подстрингови који могу садржати само мала слова. - речи могу бити раздвојени једним размаком (SPACE), зарезом или тачка-зарезом. На излазу исписати обавештење да ли је реченица исправно унета.*/

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
//     char str[100];
//     fgets(str,100,stdin);
//     int i;
//     if(islower(str[0]) || str[strlen(str) - 2] != '.')
//     {
//         printf("Neispravno");
//         return 1;
//     }
//     int check=1;
//     for(i=1;i<strlen(str);i++)
//     {
//         if(isupper(str[i]))
//         {
//             check=0;
//             break;
//         }
//         if(str[i] == ' ' && str[i+1] == ' ')
//         {
//             check=0;
//             break;
//         }
//     }

//     if(check == 1)
//     {
//         printf("Ispravno");
//     }else
//     {
//         printf("Neispravno");
//     }
// }

/*Саставити програм који за унети стринг уклања све размаке и табулаторе. Исписати нови стринг.*/

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[100];
//     char novi[100];
//     fgets(str,100,stdin);
//     int i,j=0;
//     for(i=0;i<strlen(str);i++)
//     {
//         if(str[i] != ' ' && str[i] != '\t')
//         {
//             novi[j] = str[i];
//             j++;
//         }
//     }
//     novi[strcspn(novi,"\n")] = '\0';
//     puts(novi);
// }

/*Саставити функцију која уклања задати карактер у унетом стрингу. Затим, тестирати функцију у главном програму за конкретан стринг и карактер. */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void uklanjanje(char * string,char k);
// int main(void)
// {
//     char *string = malloc(20*sizeof(char));
//     if(string == NULL)
//     {
//         printf("Neuspesno alociranje memorije");
//         return 1;
//     }
//     strcpy(string,"Zdravo");
//     char k;
//     printf("Unesite karakter za uklanjanje: ");
//     // getchar() za prociscenje bafera
//     getchar();
//     scanf("%c",&k);
//     uklanjanje(string,k);
//     puts(string);
//     free(string);
// }

// void uklanjanje(char * string,char k)
// {
//     int i,brojac=0;
//     int length = strlen(string);
//     for(i=0;i<length;i++)
//     {
//         if(string[i] != k)
//         {
//             string[brojac] = string[i];
//             brojac++;
//         }
//     }
//     string[brojac] = '\0';
// }

/*Саставити програм који учитани стринг исписује уназад (с десна на лево).*/

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(void)
// {

//     char *string = malloc(20*sizeof(char));
//     if(string == NULL)
//     {
//         printf("Alociranje neuspesno");
//         return 1;
//     }
//     strcpy(string,"Zdravo");
//     int i=0,length = strlen(string);
//     char *dest = malloc(20*sizeof(char));
//     if(dest == NULL)
//     {
//         printf("Alociranje neuspesno");
//         return 1;
//     }
//     strcpy(dest,string);
//     while(*string)
//     {
//         dest[length-1-i] = *string;
//         i++;
//         *string++;
//     }
//     puts(dest);
//     free(dest);
//     free(string);
// }

/*1. Brojanje karaktera u stringu
Napiši program koji broji broj karaktera u stringu bez korišćenja strlen() funkcije.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     int length = 0,i;
//     char* string = malloc(10 * sizeof(char));
//     if(string == NULL)
//     {
//         printf("Allocation failed");
//         return 1;
//     }
//     fgets(string,10,stdin);
//     string[strcspn(string,"\n")] = '\0';
//     for(i=0;string[i]!= '\0';i++)
//     {
//         length++;
//     }
//     printf("Duzina stringa je %d",length);
//     free(string);
// }

/*2. Obrtanje stringa
Napiši funkciju koja prima string i vraća novi string u obrnutom redosledu.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* obrni(char *string);

// int main(void)
// {
//     char *string = malloc(10 * sizeof(char));
//     if(string == NULL)
//     {
//         printf("Allocation failed");
//         return 1;
//     }
//     fgets(string,10,stdin);
//     string[strcspn(string,"\n")] = '\0';
//     char *novi_string = obrni(string);
//     // printf("%s\n",string);
//     // printf("%s\n",novi_string);
//     puts(novi_string);
//     free(string);
//     free(novi_string);
// }

// char* obrni(char *string)
// {
//     char *novi= malloc(10 * sizeof(char));
//     if(novi == NULL)
//     {
//         printf("Allocation failed");
//         exit(1);
//     }
//     int i,brojac = 0,length = strlen(string);
//     for(i=length-1;i>=0;i--)
//     {
//         novi[brojac] = string[i];
//         brojac++;
//     }
//     novi[brojac] = '\0';
//     return novi;
// }

/*3. Brojanje samoglasnika i suglasnika
Napiši funkciju koja prima string i broji broj samoglasnika (a, e, i, o, u) i suglasnika u njemu.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX 100
// void broj(char *string,int length);

// int main(void)
// {
//     char *string = malloc(MAX * sizeof(char));
//     if(string == NULL)
//     {
//         printf("Allocation failed.");
//         return 1;
//     }
//     printf("Unesite neki string:\n");
//     fgets(string,MAX,stdin);
//     string[strcspn(string,"\n")] = '\0';
//     int length = strlen(string);
//     broj(strlwr(string),length);
//     free(string);
// }

// void broj(char *string,int length)
// {
//     int sam=0,su=0,i;
//     for(i=0;i<length;i++)
//     {
//         if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
//         {
//             sam++;
//         }else if(string[i] != ' ' && string[i] != ',')
//         {
//             su++;
//         }
//     }
//     printf("U stringu imamo %d samoglasnika i %d suglasnika",sam,su);
// }

/*4. Uklanjanje svih razmaka
Napiši funkciju koja uklanja sve razmake iz stringa. Primer: "Zdravo svet" -> "Zdravosvet"*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void uklanjanje(char*string,int length);

// int main(void)
// {
//     char *string = malloc(100 * sizeof(char));
//     if(string == NULL)
//     {
//         printf("Allocation failed.");
//         return 1;
//     }
//     printf("Unesite string:\n");
//     fgets(string,100,stdin);
//     string[strcspn(string,"\n")] = '\0';
//     int length = strlen(string);
//     uklanjanje(string,length);
//     puts(string);
//     free(string);
// }

// void uklanjanje(char*string,int length)
// {
//     int i,brojac=0;
//     for(i=0;i<length;i++)
//     {
//         if(string[i] != ' ' && string[i] != '\t')
//         {
//             string[brojac] = string[i];
//             brojac++;
//         }
//     }
//     string[brojac] = '\0';
// }

/*5. Prebrojavanje reči u stringu
Napiši funkciju koja broji broj reči u stringu. Pretpostavi da su reči razdvojene jednim razmakom.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int brojReci(char*string,int length);

int main(void)
{
    char *string = malloc(100 * sizeof(char));
    if(string == NULL)
    {
        printf("Allocation failed.");
        return 1;
    }
    printf("Unesite neki string:\n");
    fgets(string,100,stdin);
    string[strcspn(string,"\n")] = '\0';
    int length = strlen(string);
    printf("U nasem stringu imamo %d reci.",brojReci(string,length));
    free(string);
}

int brojReci(char*string,int length)
{
    int i,brojac=1;
    for(i=0;i<length;i++)
    {
        if(string[i] == ' ')
        {
            brojac++;
        }
    }
    return brojac;
}