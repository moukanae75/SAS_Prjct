#include <stdio.h>

int main() {
    int n = 5;
    int tableau[5] = {1,2,3,4,5};

    for (int i = 0; i < n / 2; i++) {
        int x = tableau[i];
        tableau[i] = tableau[n - i - 1];
        tableau[n - i - 1] = x;
    }

    printf("Tableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
