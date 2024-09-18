#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[50];
    char auteur[50];
    char annee[50];
};

struct Livre new(char tit[],char aut[], char ann[])
{
    struct Livre New_liv;
    strcpy(New_liv.titre,tit);
    strcpy(New_liv.auteur,aut);
    strcpy(New_liv.annee,ann);
    return New_liv;
}

int main() {
    struct Livre livre = new("med","hello","2020");
    printf("%s\n",livre.titre);
    printf("%s\n",livre.auteur);
    printf("%s\n",livre.annee);
    return 0;
}
