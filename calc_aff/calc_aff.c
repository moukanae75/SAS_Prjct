#include <stdio.h>

int main() {
    double a,b;
    system("cls");
    printf("Entrer deux nombre reel a et b :\nExemple (20 42)\n");
    scanf("%lf %lf",&a,&b);
    system("cls");
    printf("le resultat de a + b est : %.2lf\n", a+b);
    printf("le resultat de a - b est : %.2lf\n", a-b);
    printf("le resultat de a + b est : %.2lf\n", a*b);
    if (b != 0) {
    printf("le resultat de a + b est : %.2lf\n", a/b);

    }else {
        printf("Division par zéro impossible.\n");
    }
    return 0;
}