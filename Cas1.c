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

void ars(int niz[],int n){
    int i,S=0,brojDeljivoSa3=0;
    for (i=0;i<n;i++){
        if (niz[i]%3==0){
            S+=niz[i];
            brojDeljivoSa3++;
        }
    }
    float ars=(float)S/brojDeljivoSa3;
    printf("Broj deljivih sa 3 je %.2f",ars);
}

void formirajC(int a[],int b[],int c[],int n,int m){
    // C = A,B
    int i;
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=n;i<n+m;i++){
        c[i]=b[i-n];
    }
}


int main(){
    int nizA[MAX],nizB[MAX],nizC[MAX],i,n,m;
    float arit;
    printf("Unesite duzinu niza ");
    scanf("%d",&n);
    unos(nizA,n);
    unos(nizB,m);
    formirajC(nizA,nizB,nizC,n,m);
    // suma elemenata
    ispis(nizC,n+m);
    return 0;
}