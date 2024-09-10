#include <stdio.h>

int main() {
    int N;
    int inverse = 0;

    system("cls");

    
    printf("Entrez un nombre de 4 chiffres : ");
    scanf("%d", &N);

    
    if (N < 1000 || N > 9999) {
        printf("Le nombre doit être à 4 chiffres.\n");
        return 1;
    }

    while (N != 0) {
        int res = N % 10;
        inverse = inverse * 10 + res;  
        N = N / 10;  
    }
    printf("L'inverse du nombre est : %d\n", inverse);

    return 0;
}
