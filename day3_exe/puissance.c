#include <stdio.h>

int main() {
    int base;
    int pow;
    system("cls");
    printf("Entrer une base : ");
    scanf("%d",&base);
    printf("Entrer une puissance : ");
    scanf("%d",&pow);
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result *= base ;
    }
    printf("%d",result);
    

    return 0;
}