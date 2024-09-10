#include <stdio.h>

int main() {
    char caractere;

    system("cls");
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    system("cls");
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("%c est une lettre majuscule.\n", caractere);
    } else if(caractere >= 'a' && caractere <= 'z'){
        printf("%c n'est pas une lettre majuscule.\n", caractere);
    }else {
        printf("n'est pas une lettre.\n");
    }

    return 0;
}
