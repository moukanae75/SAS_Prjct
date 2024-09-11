#include <stdio.h>
#include <string.h>

void supprimer();
void afficher();
void rechercher();
void fordelay();
void ajouter();

#define taches 100
#define len 100

char titles[taches][len];
char descriptions[taches][len];
char dates[taches][len];

int free = 0; 



 
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
                
            case 2:
                supprimer();
                
            case 3:
                afficher();
                
            case 4:
                rechercher();
                
            case 5:
                printf("Au revoir !\n");
               
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                main();
            }
        
        
        
    

    return 0;
}
void ajouter() {
    system("cls");
    printf("Entrez le titre de la tache : ");
    scanf(" %s", titles[free]);
    printf("Entrez la description de la tache : ");
    scanf(" %s", descriptions[free]);
    printf("Entrez la date d'echeance (AAAA-MM-JJ) : ");
    scanf(" %s", dates[free]);
    printf("Tache ajoutee avec succes !\n");
    
    free++;
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
void supprimer() {
    char titre[len];
    printf("Entrez le titre de la tache a supprimer : ");
    scanf("%s", titre);
    int index = 0;
    while (index < free)
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

    for(int i = 0; i < free; i++) {
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
    if (free == 0) {
        printf("Aucune tache a rechercher.\n");
        fordelay();
        main();
    }
    char test[10];
    printf("Entrez le titre de la tache a rechercher : ");
    scanf(" %s", test);

    for(int i = 0; i < free; i++) {
        
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
void fordelay() {
   
        
            
            for (int i = 0;i<8;i++) {
                printf(".");
                Sleep(500);
            }
           
        
    
    
}

