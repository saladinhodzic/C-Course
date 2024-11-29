// Dat je prirodan broj k. Napisati program kojim se određuje koja se cifra nalazi na k-toj poziciji niza:
// 110100100010000100000
// U kome su redom dopisivani brojevi 1, 10, 100, 1000, 10000...

// KORACI:

// GENERISATI NIZ CIFARA 1101001000

// NACI ZA UNETI BROJ K ODGOVARAJACU CIFRU U NIZU

#include <stdio.h>
#include <math.h>

void generate(int niz[],int length){
    int i,acc,j,m=0;
    int noviNiz[100]={1};
    for(i=0;i<length;i++){
        acc=round(pow(10,i));
        niz[i]=acc;
    }
    for (j=0;j<length;j++){
        while(niz[j]>0){
            int remainder=niz[j]%10;
            niz[j]/=10;
            noviNiz[m]=remainder;
            m++;
        }
        printf("%d, ",noviNiz[j]);
    }
}

int main(){
    int niz[100],i;
    int length=sizeof(niz)/sizeof(niz[0]);
    generate(niz,length);

    
    return 0;
}