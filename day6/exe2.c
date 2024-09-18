#include <stdio.h>
#include <string.h>




struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5];
};

int main() {
    
    struct Etudiant etu = {"exemple","ahmed"};

    etu.notes[0] = 15;
    etu.notes[1] = 12;
    etu.notes[2] = 18;
    etu.notes[3] = 14;
    etu.notes[4] = 16;

    printf("Nom : %s\n", etu.nom);
    printf("Prenom : %s\n", etu.prenom);
    printf("Notes :\n");
    for (int i = 0; i < 5; i++) {
        printf("Note %d: %d\n", i + 1, etu.notes[i]);
    }

    return 0;
}
