#include <stdio.h>

int main() {
    int n1, n2;

    printf("Entrez le nombre d'elements du premier tableau : ");
    scanf("%d", &n1);

    int tableau1[n1];
    
    printf("Entrez les %d elements du premier tableau :\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau1[i]);
    }

    printf("Entrez le nombre d'elements du deuxieme tableau : ");
    scanf("%d", &n2);
    
    int tableau2[n2];

    printf("Entrez les %d elements du deuxieme tableau :\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau2[i]);
    }

    int tab_fus[n1 + n2];

    for (int i = 0; i < n1; i++) {
        tab_fus[i] = tableau1[i];
    }

    for (int i = 0; i < n2; i++) {
        tab_fus[n1 + i] = tableau2[i];
    }

    printf("Tableau fusionne :\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", tab_fus[i]);
    }
    printf("\n");

    return 0;
}
