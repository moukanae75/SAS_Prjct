#include <stdio.h>

int main() {
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    int choix;
    system("cls");
    printf("Jours de la semaine :\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, jours[i]);
    }

    printf("\nChoisissez un jour (1-7) : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Choix invalide.\n");
        main();
    } else {
        printf("Vous avez choisi : %s\n", jours[choix - 1]);
        printf("Les jours suivants sont :\n");

        for (int i = choix; i < 7; i++) {
            printf("%s\n", jours[i]);
        }
        
        for (int i = 0; i < choix - 1; i++) {
            printf("%s\n", jours[i]);
        }
    }

    return 0;
}
