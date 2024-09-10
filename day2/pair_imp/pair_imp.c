#include <stdio.h>

int main() {
    int n;
    system("cls");
    printf("Entrer un n : ");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
        system("cls");
        printf("%d est un n paire !",n);
    }else {
        system("cls");
        printf("%d est un n impaire !",n);
    }
    
    return 0;
}