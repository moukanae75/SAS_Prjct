#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 

    system("cls");
    printf("Entrez le 1er nombre : ");
    scanf("%lf", &a);

    printf("Entrez le 2eme nombre : ");
    scanf("%lf", &b);

    printf("Entrez le 3eme nombre : ");
    scanf("%lf", &c);

    
    double p = a * b * c;

    
    double moy_geo = pow(p, 1.0 / 3.0);

    
    printf("La moyenne geometrique est : %.2lf\n", moy_geo);

    return 0;
}
