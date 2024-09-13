#include <stdio.h>

int main() {
    int n, somme = 0;
    system("cls");
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
        somme += tableau[i];  
    }

    printf("La somme des elements du tableau est : %d\n", somme);

    return 0;
}
