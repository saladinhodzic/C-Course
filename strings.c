// STRINGS

// Саставити програм који за унети цео број n исписује одговарајуће поглавље дате књиге.
// Књига има следећа поглавља: Operatori, Ciklusi, Skokovi, Karakteri, Nizovi,
// Matrice, Stringovi, Pokazivaci, Strukture, Datoteke. 

#include <stdio.h>

int main(void)
{
    char chapters[100][100]={"Operatori","Ciklusi","Skokovi","Karakteri","Nizovi","Matrice","Stringovi","Pokazivaci","Strukture","Datoteke"};
    int n;
    printf("Unesite dato poglavlje knjige n: ");
    scanf("%d",&n);
    
    return 0;
}