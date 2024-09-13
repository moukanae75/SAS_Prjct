#include <stdio.h>

int main() {
    int n, max;
    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
 
    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("Le plus grand element du tableau est : %d\n", max);

    return 0;
}
