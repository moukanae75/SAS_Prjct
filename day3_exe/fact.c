#include <stdio.h>
int factoriel(int n) {
    if (n == 1) {
        return n;
    }
    return n * factoriel(n - 1);
}

int main() {
    int n;
    system("cls");
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    printf("Factoriel de %d est %d",n,factoriel(n));
    return 0;
}
