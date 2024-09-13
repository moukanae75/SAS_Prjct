#include <stdio.h>

int main() {
    int n;
    float somme, moyenne;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i]; 
    }
    printf("%d",somme);
    moyenne = somme / n;

    printf("La moyenne des elements est : %.2f\n", moyenne);

    return 0;
}
