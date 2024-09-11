#include <stdio.h>

int main() {
    
    int age;
    int type_voiture;
    int nombre_accident;
    double prime_base; 
    double prime;
    
    
    system("cls");
    printf("Entrez l'age du conducteur (en annees) : ");
    scanf("%d", &age);
    
    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);
    
    printf("Entrez le nombre d'accidents au cours des 5 dernieres annees : ");
    scanf("%d", &nombre_accident);

    printf("Entrer le prime de base : ");
    scanf("%lf",&prime_base);
    
    
    if (age < 25) {
        prime = prime_base * 1.5;
    }else if (age >= 25 && age < 65 ){
        prime = prime_base;
    }
     else if (age > 65) {
        prime = prime_base * 1.2;
    }
    
    
    if (type_voiture == 1) {
        prime *= 2;
    } else if (type_voiture == 2) {
        prime *= 1.2;
    } else if (type_voiture == 3) {
        prime *= 1.1;
    }
    
    
    if (nombre_accident > 1) {
        prime += (prime * 30 ) / 100;
    }
    
    
    printf("La prime d'assurance est : %.2f euros\n", prime);
    
    return 0;
}
