#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MdP(int n);

int main() {
    int n;
    system("cls");
    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La langueur du mot de passe doit être un nombre entier positif.\n");
        return 1;
    }

    MdP(n);

    return 0;
}
void MdP(int n) {
    char all[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int len = sizeof(all) - 1;

    srand(time(NULL));

    char mdp[n];
    printf("le mot de passe : ");
    for (int i = 0; i < n; i++)
    {
        mdp[i] = all[rand() % len];
        printf("%c",mdp[i]);
    }
    
}

