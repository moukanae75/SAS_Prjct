#include <stdio.h>
#include <math.h>

int colineaire(double x1, double y1, double x2, double y2, double px, double py) {
   
    double produit_vectoriel = (x2 - x1) * (py - y1) - (y2 - y1) * (px - x1);

    
    return produit_vectoriel == 0;
}



int main() {
    double x1, y1, x2, y2; 
    double px, py;         

    system("cls");
    printf("Entrez les coordonnees de la premiere extremite du segment (x1 y1) : ");
    scanf("%lf %lf", &x1, &y1);
    printf("Entrez les coordonnees de la deuxieme extremite du segment (x2 y2) : ");
    scanf("%lf %lf", &x2, &y2);

    
    printf("Entrez les coordonnees du point a verifier (px py) : ");
    scanf("%lf %lf", &px, &py);

    float dist1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float dist2 = sqrt(pow(px - x1, 2) + pow(py - y1, 2));
    
    if (colineaire(x1, y1, x2, y2, px, py) && dist1 >= dist2) {
        printf("Le point se trouve sur le segment.\n");
    } else {
        printf("Le point ne se trouve pas sur le segment.\n");
    }

    return 0;
}
