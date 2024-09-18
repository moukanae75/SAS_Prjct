#include <stdio.h>
#include <string.h>

struct CompteBancaire {
    char nom[100];
    double solde;
};

void ajouterMontant(struct CompteBancaire *compte, double montant) {
    compte->solde += montant;
}

int main() {
    struct CompteBancaire compte;

    strcpy(compte.nom, "Alice Dupont");
    compte.solde = 2000.00;

    printf("Compte initial :\n");
    printf("Nom : %s\n", compte.nom);
    printf("Solde : %.2f\n", compte.solde);

    double montantAjoute;
    printf("Entrez le montant a ajouter au solde : ");
    scanf("%lf", &montantAjoute);

    ajouterMontant(&compte, montantAjoute);

    printf("\nCompte apres ajout du montant :\n");
    printf("Nom : %s\n", compte.nom);
    printf("Solde : %.2f\n", compte.solde);

    return 0;
}
