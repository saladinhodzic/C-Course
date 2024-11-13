// Nizovi

// Uneti niz i ispisati sumu elemenata tog niza

#include <stdio.h>
#define MAX 100

void unos (int niz[],int n){
    int i;
    printf("Unesite elemente niza \n");
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
}

// void funkcije nemaju return jer ne vracaju nista

void ispis(int niz[],int n){
    int i;
    printf("Elementi niza su \n");
    for(i=0;i<n;i++){
        printf("%d",niz[i]);
    }
}


int main(){
    int niz[MAX],i,n,S=0;
    printf("Unesite duzinu niza ");
    scanf("%d",&n);
    
    // suma elemenata

    for(i=0;i<n;i++){
        S+=niz[i];
    }
    printf("Suma elemenata niza iznosi %d",S);
    return 0;
}