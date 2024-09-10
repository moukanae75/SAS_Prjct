#include <stdio.h>

int somme_triple(int a, int b) {
    int som = a + b;
    
    if (a == b) {
        return 3 * som; 
    } else {
        return som; 
    }
}

int main() {
    int x, y;
    
    system("cls");
    printf("Entrez le premier entier : ");
    scanf("%d", &x);
    
    printf("Entrez le deuxieme entier : ");
    scanf("%d", &y);
    
    int resultat = somme_triple(x, y);
    printf("Le resultat est : %d\n", resultat);
    
    return 0;
}
