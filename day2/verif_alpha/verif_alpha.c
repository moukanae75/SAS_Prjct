#include <stdio.h>

int main() {
    char caractere;

    system("cls");
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    system("cls");
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("%c est un alphabet majuscule.\n", caractere);
    } else if(caractere >= 'a' && caractere <= 'z'){
        printf("%c est un alphabet miniscule.\n", caractere);
    }else {
        printf("n'est pas un alphabet.\n");
    }

    return 0;
}