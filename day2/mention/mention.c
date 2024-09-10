#include <stdio.h>

int main() {
    float moyenne;

    system("cls");
    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);

    
    if (moyenne >=0 && moyenne < 10) {
        printf("Mention : Recale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne >= 16) {
        printf("Mention : Tres bien\n");
    } else {
        printf("Invalide Input !!");
    }

    return 0;
}
