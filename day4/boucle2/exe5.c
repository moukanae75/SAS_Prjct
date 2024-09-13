#include <stdio.h>

int main() {
    int n;
    system("cls");
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    int result;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    printf("%d",result);
    

    return 0;
}