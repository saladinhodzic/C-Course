// #include <stdio.h>
// #include <string.h>
// #define MAX 100

// typedef struct zaposleni{
//     char imeiprezime[30];
//     char radno_mesto[15];
//     float plata;
//     float satnica;

// } ZAPOSLENI;
// typedef struct rad{
//     char ime[50];
//     int satPocetka;
//     int satZavrsetka;
//     int redniBrojDanaUMesecu;
// } RAD;
// int main(void)
// {
//     int i,n;
//     ZAPOSLENI z[MAX];
//     printf("Unesite broj zaposlenih: ");
//     scanf("%d",&n);
//     printf("Unesite podatke o zaposlenima\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%s",&z[i].imeiprezime);
//         scanf("%s",&z[i].radno_mesto);
//         scanf("%f",&z[i].plata);
//     }
    
//     // svim direktorim povecati platu za 10%
//     for(i=0;i<n;i++)
//     {
//         if(strcmp(z[i].radno_mesto,"direktor")==0)
//         {
//             z[i].plata= 1.1* z[i].plata;
//         }
//     }
//     // listu zaposlenih sortirati po platama
//     int j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(z[i].plata<z[j].plata)
//             {
//                 ZAPOSLENI pom = z[i];
//                 z[i]=z[j];
//                 z[j]=pom;
//             }
//         }
//     }
//     // ispisati radnike u tabelarnom obliku
//     RAD r[100];
//     for(i=0;i<31;i++)
//     {
//         scanf("%s",&r[i].ime);
//         scanf("%d",&r[i].redniBrojDanaUMesecu);
//         scanf("%d",&r[i].satPocetka);
//         scanf("%d",&r[i].satZavrsetka);
//     }
//     int ukupanRadUMesecu=0;
//     for (i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(strcmp(r[i].ime,r[j].ime)==0)
//             {
//                 ukupanRadUMesecu+=r[i].satPocetka - r[i].satZavrsetka;
//             }
//         }
//     }
// }

#include <stdio.h>
#include <string.h>
typedef struct roba{
    char barkod[100];
    char naziv[50];
    float cena;
    int kolicina;
}ROBA;

typedef struct prodaja{
    char barkod[100];
    int kolicina;
}PRODAJA;

int main(void)
{
    int i;
    ROBA r[100];
    int n;
    printf("Unesite broj robe: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&r[i].barkod);
        scanf("%s",&r[i].naziv);
        scanf("%f",&r[i].cena);
        scanf("%d",&r[i].kolicina);
    }
    PRODAJA p[100];
    for (i=0;i<n;i++)
    {
        scanf("%s",&p[i].barkod);
        scanf("%d",&p[i].kolicina);
    }

    for(i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (strcmp(r[i].barkod,p[j].barkod)==0)
            {
                r[i].kolicina-=p[j].kolicina;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Ostalo kolicine posle prodaje je za %s barkod je %d\n",r[i].barkod,r[i].kolicina);
        
    }
}

