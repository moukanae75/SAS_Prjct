#include <stdio.h>

int main() {
    int n, i, impair = 2;

    system("cls");
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

   
    printf("Les %d premiers nombres impairs sont :\n", n);
    
    for(i = 0; i < n; i++) {
        printf("%d ", impair);
        impair += 2;  
    }

    printf("\n");

    return 0;
}
