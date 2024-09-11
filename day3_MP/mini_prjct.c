#include <stdio.h>
#include <string.h>

void supprimer();
void afficher();
void rechercher();
void fordelay();
#define MAX_TASKS 100
#define MAX_LEN 100

char titles[MAX_TASKS][MAX_LEN];
char descriptions[MAX_TASKS][MAX_LEN];
char dates[MAX_TASKS][MAX_LEN];
// int next[MAX_TASKS];

// int head = -1;  
int free_spot = 0; 

void ajouter() {
    system("cls");
     printf("Entrez le titre de la tache : ");
    scanf(" %s", titles[free_spot]);
    printf("Entrez la description de la tache : ");
    scanf(" %s", descriptions[free_spot]);
    printf("Entrez la date d'echeance (AAAA-MM-JJ) : ");
    scanf(" %s", dates[free_spot]);
    
    free_spot++;
    int choix;
    printf("\t\tEntrer 0 pour revenir au menu et 1 pour exit : ");
    scanf("%d",&choix);
    if (choix == 0)
    {
        system("cls");
        main();
    }else{
        return;
    }
}

 
int main() {
    int choix;
        system("cls");
    
        printf("\nMenu de Gestion de Taches\n");
        printf("1. Ajouter une tache\n");
        printf("2. Supprimer une tache\n");
        printf("3. Afficher toutes les taches\n");
        printf("4. Rechercher une tache\n");
        printf("5. Quitter\n");
        printf("\t\tEntrez votre choix : ");
        
        
            scanf("%d", &choix);
            system("cls");

            switch (choix) {
            case 1:
                ajouter();
                break;
            case 2:
                supprimer();
                break;
            case 3:
                afficher();
                break;
            case 4:
                rechercher();
                break;
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                main();
            }
        
        
        
    

    return 0;
}
void supprimer() {
    char titre[MAX_LEN];
    printf("Entrez le titre de la tache a supprimer : ");
    scanf("%s", titre);
    int index = 0;
    while (index < free_spot)
    {
        if (strcmp(titles[index], titre) == 0) {
            printf("Tache supprimee avec succes !\n");
            strcpy(titles[index],"");
            strcpy(descriptions[index],"");
            strcpy(dates[index],"");
            
        }
        index++;
    }
    int choix;
    printf("\t\tEntrer 0 pour revenir au menu et 1 pour exit : ");
    scanf("%d",&choix);
    if (choix == 0)
    {
        system("cls");
        main();
    }else{
        return;
    }

};

void afficher() {
    char test[10];

    for(int i = 0; i < free_spot; i++) {
        strcpy(test,titles[i]);
        if (strcmp(test, "") != 0)
        {
        printf("Titre : %s\n", titles[i]);
        printf("Description : %s\n", descriptions[i]);
        printf("Date d'echeance : %s\n\n", dates[i]);
        }
        
        
    }
    int choix;
    printf("\t\tEntrer 0 pour revenir au menu et 1 pour exit : ");
    scanf("%d",&choix);
    if (choix == 0)
    {
        system("cls");
        main();
    }else{
        return;
    }
};
void rechercher() {
    system("cls");
    if (free_spot == 0) {
        printf("Aucune tache a rechercher.\n");
        fordelay();
        main();
    }
    char test[10];
    printf("Entrez le titre de la tache a rechercher : ");
    scanf(" %s", test);

    for(int i = 0; i < free_spot; i++) {
        
        if (strcmp(test, titles[i]) == 0)
        {
        printf("Titre : %s\n", titles[i]);
        printf("Description : %s\n", descriptions[i]);
        printf("Date d'echeance : %s\n\n", dates[i]);
        }
        
        
    }
    int choix;
    printf("\t\tEntrer 0 pour revenir au menu et 1 pour exit : ");
    scanf("%d",&choix);
    if (choix == 0)
    {
        system("cls");
        main();
    }else{
        return;
    }
};
void fordelay(int j) {
   
        
            
            for (int i = 0;i<8;i++) {
                printf(".");
                Sleep(500);
            }
           
        
    
    
}

