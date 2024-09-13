#include <stdio.h>

int main() {
    int n, facteur;
    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
    }
 
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    printf("Tableau apres multiplication par %d :\n", facteur);
    for (int i = 0; i < n; i++) {
        tableau[i] *= facteur;
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
