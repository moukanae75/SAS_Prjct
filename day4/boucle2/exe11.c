#include <stdio.h>
#include <math.h>

int nbr_non_zero(int n);

int main() {
    int nombre, somme = 0, count = 0;
    float moyenne;
    system("cls");
    printf("Entrez une serie de nombres positifs (entrez 0 pour terminer) : \n");

    while (1) {
        scanf("%d", &nombre);
        
        if (nombre == 0) {
            break;
        }

        somme += nbr_non_zero(nombre);
        count++;
    }

    if (count > 0) {
        moyenne = (float)somme / count;
        printf("%f\n",moyenne);
        int last = nbr_non_zero(moyenne);
        printf("La moyenne des nombres saisis est : %d\n",last);
    } else {
        printf("Aucun nombre positif n'a été saisi.\n");
    }

    return 0;
}
int nbr_non_zero(int n) {
    int z;
    int res = n;
    int count = 0;
    while (z == 0)
    {   
        if (z != 0)
        {
            break;
        }
        n = n / 10;
        z = n % 10;
        count++;
        
    }
    int power = pow(10,count);
    return res / power;  
}
