#include <stdio.h>

int main() {
    int n, chiffre;
    
    system("cls");
    printf("Entrez un entier : ");
    scanf("%d", &n);

    
    printf("Le nombre en ordre inverse est : ");
    while (n > 0) {
        chiffre = n % 10;       
        printf("%d", chiffre); 
        n = n / 10;            
    }

    printf("\n");

    return 0;
}
