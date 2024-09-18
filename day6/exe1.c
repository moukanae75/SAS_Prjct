#include <stdio.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne p1 = {"med","mejdoubi",30};
    
    printf("Nom : %s\n", p1.nom);
    printf("Prenom : %s\n", p1.prenom);
    printf("Age : %d\n", p1.age);

    return 0;
}
