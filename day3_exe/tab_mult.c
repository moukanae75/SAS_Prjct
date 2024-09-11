#include <stdio.h>

int main() {
    int number;
    system("cls");
    printf("Entrer un nombre : ");
    scanf("%d",&number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",number,i,i*number);
    }
    
    return 0;
}