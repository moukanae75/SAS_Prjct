#include <stdio.h>

int main() {
    int n, factoriel = 1;

    printf("Entrer un nombre : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factoriel *= i;
    }

    printf("Factorielle de %d est %d\n", n, factoriel);

    return 0;
}
