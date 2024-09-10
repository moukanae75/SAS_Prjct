#include <stdio.h>

int main() {
    int choix;
    double annee;
    
    system("cls");
    printf("Entrez le n d'annees : ");
    scanf("%lf", &annee);
    
    system("cls");
    printf("\n\t\tMenu de conversion :\n");
    printf("\t1. Convertir en mois\n");
    printf("\t2. Convertir en jours\n");
    printf("\t3. Convertir en heures\n");
    printf("\t4. Convertir en minutes\n");
    printf("\t5. Convertir en secondes\n");
    printf("\t\t\tChoisissez une option entre (1-5) : ");
    scanf("%d", &choix);
    
    
    switch(choix) {
        case 1:
            printf("%.0lf annees = %.0lf mois\n", annee, annee * 12);
            break;
        case 2:
            printf("%.0lf annees = %.0lf jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%.0lf annees = %.0lf heures\n", annee, annee * 365 * 24);
            break;
        case 4:
            printf("%.0lf annees = %.0lf minutes\n", annee, annee * 365 * 24 * 60);
            break;
        case 5:
            printf("%.0lf annees = %.0lf secondes\n", annee, annee * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Option invalide. Veuillez choisir une option entre 1 et 5.\n");
    }
    
    return 0;
}
