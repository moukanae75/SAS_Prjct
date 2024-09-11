#include <stdio.h>

int main() {
    double l, L; 
    double surface; 

    system("cls");
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &l);

    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &L);


    surface = l * L;


    printf("La surface du rectangle est : %.2lf\n", surface);

    return 0;
}
