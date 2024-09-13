#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre de termes doit être positif.\n");
        return 1;
    }

    int a = 0, b = 1, c;

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (int i = 1; i <= n + 1; i++) {
        if (i == 1) {
            printf("%d ", 0);
            continue;
        }
        if (i == 2) {
            printf("%d ", 1);
            continue;
        }
        c = a + b; 
        a = b;     
        b = c;
        printf("%d ", c);
    }
    printf("\n");

    return 0;
}
