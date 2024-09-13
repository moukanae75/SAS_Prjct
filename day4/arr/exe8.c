#include <stdio.h>

int main() {
    int n;

    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n], tableauCopie[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n; i++) {
        tableauCopie[i] = tableau[i];
    }

    printf("Tableau original :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Tableau copie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableauCopie[i]);
    }
    printf("\n");

    return 0;
}
