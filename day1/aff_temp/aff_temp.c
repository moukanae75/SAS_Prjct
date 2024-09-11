#include <stdio.h>
#include <windows.h>
#include <string.h>

void delay() {
    for (int i = 0;i <6;i++) {
        printf(".");
        Sleep(1000);
    }
}

int main() {

    int T;
    char etat[20];
    system("cls");

    printf("Entrer la temperature en Celsius : ");
    scanf("%d", &T);
    if (T < 0) {
        strcpy(etat,"Solide");
        
    }else if (T >= 0 && T < 100) {
        strcpy(etat,"Liquide");

    }else if (T >= 100) {
        strcpy(etat,"Gaz");

    }
    system("cls");
     printf("L'eau est dans l'etat %s",etat);
    
    return 0;
}
