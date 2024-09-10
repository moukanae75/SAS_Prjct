#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;  
    double delta, x1, x2, reel, imaginaire;
    
    system("cls");
    printf("Entrez le coefficient a (a != 0) : ");
    scanf("%lf", &a);
    
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);
    
    
    delta = b * b - 4 * a * c;
    printf("\ndelta est %.0lf\n",delta);
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Il y a deux solutions reelles distinctes :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Il y a une solution reelle double : x = %.2lf\n", x1);
    }
    else {
        reel = -b / (2 * a);
        imaginaire = sqrt(-delta) / (2 * a);
        printf("Il y a deux solutions complexes :\n");
        printf("x1 = %.2lf + %.2lfi\n", reel, imaginaire);
        printf("x2 = %.2lf - %.2lfi\n", reel, imaginaire);
    }

    return 0;
}
