#include <stdio.h>

int main() {
    int N;
    int a,b,c,d;
    

    system("cls");

    
    printf("Entrez un nombre de 4 chiffres : ");
    scanf("%d", &N);

    
    if (N < 1000 || N > 9999) {
        printf("Le nombre doit être à 4 chiffres.\n");
        return 1;
    }
    a = N/1000;
    b = (N/100)%10;
    c = (N/10)%10;
    d = N % 10;

    
    printf("L'inverse du nombre est : %d%d%d%d\n", d,c,b,a);

    return 0;
}
