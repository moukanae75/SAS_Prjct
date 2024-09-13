#include <stdio.h>

int main() {
    int n;
    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
 
    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
    }

    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
