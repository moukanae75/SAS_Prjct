#include <stdio.h>

int main() {
    int n, min;
    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
 
    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
    }

    min = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("Le plus petit element du tableau est : %d\n", min);

    return 0;
}
