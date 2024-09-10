#include <stdio.h>

int main() {
    float n;

    system("cls");
    printf("Entrez un nombre : ");
    scanf("%f", &n);

    
    if (n > 0) {
        printf("Le n %.2f est positif.\n", n);
    }
    else if (n < 0) {
        printf("Le n %.2f est negatif.\n", n);
    }
    else {
        printf("Le n est nul.\n");
    }

    return 0;
}
