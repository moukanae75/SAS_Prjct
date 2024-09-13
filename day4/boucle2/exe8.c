#include <stdio.h>

int cherDich(int tableau[], int n, int inf,int sup) {
    
    int mil = (inf + sup) / 2;
    printf("le milieu est %d \n",tableau[mil]);
    while (inf <= sup)
    {
        mil = (inf + sup) / 2;
        if (tableau[mil] == n)
    {
        return mil;
    }else  if (tableau[mil] <= n) {
        inf = mil + 1;

    }else {
        sup = mil - 1;

    }
    }
    
    return 1; 
}

int main() {
    int n;
    system("cls");
    int tableau[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int taille = sizeof(tableau) / 4;
    int inf = 0;
    int sup = taille - 1;

    printf("Entrez un nombre a rechercher dans le tableau : ");
    scanf("%d", &n);
    printf("La taile est : %d\n",taille);

    if (cherDich(tableau, n ,inf,sup) != 1) {
        printf("Le nombre %d a ete trouve a l'index %d.\n", n, cherDich(tableau, n ,inf,sup));
    } else {
        printf("Le nombre %d n'est pas present dans le tableau.\n", n);
    }

    return 0;
}
