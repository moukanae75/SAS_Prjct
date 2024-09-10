#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char* jours[] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };

    srand(time(NULL)); // intialer la jeneration d'un nombre aleatoire

    int index = rand() % 7; // generer un nombre aleatoire pour index

    printf("Jour aleatoire de la semaine : %s\n", jours[index]);

    return 0;
}
