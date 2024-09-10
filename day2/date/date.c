#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int jour, mois, annee;
    system("cls");
    
    printf("Entrez la date au format dd/mm/yyyy : ");
    scanf("%d/%d/%d", &jour,&mois,&annee);

    
    switch (mois) {
        case 1: printf("%d-%s-%d\n", jour, "Janvier", annee);
        break;
        case 2: printf("%d-%s-%d\n", jour, "Fevrier", annee);
        break;
        case 3: printf("%d-%s-%d\n", jour, "Mars", annee);
        break;
        case 4: printf("%d-%s-%d\n", jour, "Avril", annee);
        break;
        case 5: printf("%d-%s-%d\n", jour, "Mai", annee);
        break;
        case 6: printf("%d-%s-%d\n", jour, "Juin", annee);
        break;
        case 7: printf("%d-%s-%d\n", jour, "Juillet", annee);
        break;
        case 8: printf("%d-%s-%d\n", jour, "Aout", annee);
        break;
        case 9: printf("%d-%s-%d\n", jour, "Septembre", annee);
        break;
        case 10:printf("%d-%s-%d\n", jour, "Octobre", annee);
        break;
        case 11:printf("%d-%s-%d\n", jour, "Novembre", annee);
        break;
        case 12:printf("%d-%s-%d\n", jour, "Decembre", annee);
        break;
        default:printf("Inconu Date !!");
        break;

    }
    
    

    return 0;
}
