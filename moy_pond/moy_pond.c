#include <stdio.h>

int main() {
    double a, b, c;  
    double p1 = 2, p2 = 3, p3 = 5;  

    system("cls");
    printf("Entrez le 1er nombre : ");
    scanf("%lf", &a);

    printf("Entrez le 2eme nombre : ");
    scanf("%lf", &b);

    printf("Entrez le 3eme nombre : ");
    scanf("%lf", &c);

    
    double m = (a * p1 + b * p2 + c * p3) / (p1 + p2 + p3);


    printf("La moyenne ponderee est : %.2lf\n", m);

    return 0;
}
