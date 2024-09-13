#include <stdio.h>

int main() {
    int n, element, found = 0;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (tableau[i] == element) {
            printf("Element %d trouve a la position %d.\n", element, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d non trouve dans le tableau.\n", element);
    }

    return 0;
}
