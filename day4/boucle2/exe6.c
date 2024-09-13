#include <stdio.h>

int main() {
    int n;
    system("cls");
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
        _sleep(1000);
        main();
    }

    printf("Les facteurs de %d sont :\n", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
