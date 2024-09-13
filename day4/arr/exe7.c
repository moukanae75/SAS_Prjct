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

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (tableau[j] < tableau[min]) {
                min = j;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",tableau[i]);
        }
        printf("\n");
        int max = tableau[i];
        tableau[i] = tableau[min];
        tableau[min] = max;
        for (int i = 0; i < n; i++)
        {
            printf("%d ",tableau[i]);
        }
        printf("\n");
        
    }
    

    printf("Tableau trie en ordre croissant :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
