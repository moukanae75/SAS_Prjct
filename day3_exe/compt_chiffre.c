#include <stdio.h>

int main() {
    int n, compteur = 0;

    
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Le nombre doit etre positif.\n");
        main();
    }

    
    if (n == 0) {
        compteur = 1; 
    } else {
        while (n > 0) {
            n = n / 10; 
            compteur++; 
        }
    }

    printf("Nombre de chiffres = %d\n", compteur);

    return 0;
}
