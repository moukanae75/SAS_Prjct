#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char date[11];
    int jour, mois, annee;
    system("cls");
    
    printf("Entrez la date au format dd/mm/yyyy : ");
    scanf("%d/%d/%d", &jour,&mois,&annee);

    
    switch (mois) {
        case 1: printf("%d-%s-%d\n", jour, "Janvier", annee); date == "Janvier";
        break;
        case 2: printf("%d-%s-%d\n", jour, "Fevrier", annee); date == "Février";
        break;
        case 3: printf("%d-%s-%d\n", jour, "Mars", annee); date == "Mars";
        break;
        case 4: printf("%d-%s-%d\n", jour, "Avril", annee); date == "Avril";
        break;
        case 5: printf("%d-%s-%d\n", jour, "Mai", annee); date == "Mai";
        break;
        case 6: printf("%d-%s-%d\n", jour, "Juin", annee); date == "Juin";
        break;
        case 7: printf("%d-%s-%d\n", jour, "Juillet", annee); date == "Juillet";
        break;
        case 8: printf("%d-%s-%d\n", jour, "Aout", annee); date == "Août";
        break;
        case 9: printf("%d-%s-%d\n", jour, "Septembre", annee); date == "Septembre";
        break;
        case 10:printf("%d-%s-%d\n", jour, "Octobre", annee); date ==  "Octobre";
        break;
        case 11:printf("%d-%s-%d\n", jour, "Novembre", annee); date ==  "Novembre";
        break;
        case 12:printf("%d-%s-%d\n", jour, "Decembre", annee); date ==  "Décembre";
        break;
        default:printf("Inconu Date !!");
        break;

    }
    
    

    return 0;
}
