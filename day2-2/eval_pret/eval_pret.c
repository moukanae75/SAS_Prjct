#include <stdio.h>

int main() {
    
    double revenu;
    int credit;
    int duree;
    
    system("cls");
    printf("Entrez le revenu annuel (en euro) : ");
    scanf("%lf", &revenu);
    
    printf("Entrez le score de credit (sur 1000) : ");
    scanf("%d", &credit);
    
    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &duree);
    
    
    if (revenu >= 30000 && credit >= 700 && duree <= 10) {
        printf("Eligible\n");
    } else if (revenu >= 30000 && credit >= 650 && duree <= 15) {
        printf("Eligible avec conditions\n");
    } else {
        printf("Non eligible\n");
    }
    
    return 0;
}
