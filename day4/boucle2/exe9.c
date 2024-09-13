#include <stdio.h>

int main() {
    int base, pow;
    int resultat = 1;
    system("cls");
    printf("Entrez la base (positive) : ");
    scanf("%d", &base);
    printf("Entrez l'pow (non negatif) : ");
    scanf("%d", &pow);

    if (base < 0 || pow < 0) {
        printf("Erreur : La base doit être positive et l'pow doit être non négatif.\n");
        main();
    }

    while (pow > 0) {
        resultat *= base; 
        pow--;       
    }

    printf("La puissance est : %d\n", resultat);

    return 0;
}
