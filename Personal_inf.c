#include <stdio.h>
#include <windows.h>
#include <string.h>  // Nécessaire pour strcpy

int main() {
    char name[30];
    char prenom[30];
    int age;
    char s;
    char sexe[10];
    char email[50];

    system("cls");
    printf("Entrer le nom :");
    scanf("%s", name);
    system("cls");

    printf("Entrer le prenom :");
    scanf("%s", prenom);
    system("cls");

    printf("Entrer l'age :");
    scanf("%d", &age);
    system("cls");

    printf("Entrer (M/F) pour votre sexe : ");
    scanf(" %c", &s);  // Ajout de l'espace avant %c
    system("cls");

    // Utilisation de strcpy pour copier les chaînes
    if(s == 'M') {
        strcpy(sexe, "Masculin");
    } else if (s == 'F') {
        strcpy(sexe, "Feminin");
    }

    printf("Entrer l'email :");
    scanf("%s", email);
    system("cls");
    

    printf("\n\n\tNom : %s\n\tPrenom : %s\n\tAge : %d\n\tSexe : %s\n\tAdresse Email : %s\n",name, prenom, age, sexe, email);

    return 0;
}
