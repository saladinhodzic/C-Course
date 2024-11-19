// 1.	Sa tastature se učitava prirodan broj n i zatim n prirodnih brojeva među kojima su bar dva različita. Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost. Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje:
// Druga po veličini vrednost je 6.

#include <stdio.h>
#define MAX 100

int main(){
    int n,niz[MAX],i,max;
    printf("Napisi duzinu niza\n");
    scanf("%d",&n);
    // dodavanje elemenata u niz
    for (i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    // prolazenje kroz niz i trazenje drugog najveceg
    max = niz[0];
    for(i=1;i<n;i++){
        if (max < niz[i] ){
            max=niz[i];
        }
    }

   int drugiNajveci=niz[0];

   for(i=1;i<n;i++){
    if (niz[i]!=max && drugiNajveci<niz[i]){
        drugiNajveci=niz[i];
    }
   }

   printf("Drugi najveci element u nizu je %d\n",drugiNajveci);

    printf("Najveci element u nizu je %d ",max);

    return 0;
}
