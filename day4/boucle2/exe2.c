#include <stdio.h>

int main() {
    int ligne;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &ligne);
    
    for (int i = 1; i < ligne * 2; i+= 2) {
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}
