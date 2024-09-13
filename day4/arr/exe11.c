#include <stdio.h>

int main() {
    int n, old, new;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez la valeur a remplacer : ");
    scanf("%d", &old);
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &new);

    for (int i = 0; i < n; i++) {
        if (tableau[i] == old) {
            tableau[i] = new;
        }
    }

    printf("Tableau apres remplacement :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
