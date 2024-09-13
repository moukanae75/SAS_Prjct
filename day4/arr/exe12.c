#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Elements pairs du tableau :\n");
    for (int i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) { 
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    return 0;
}
