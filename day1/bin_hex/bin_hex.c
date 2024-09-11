#include <stdio.h>


void binaire(int n) {
    int arr[32];
    int i = 0;
    printf("La valeur en binaire est : ");
    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j>=0;j --) {
        printf("%d",arr[j]);
    }
    
    printf("\n");
}

void negative(int n) {
    n = -n;
        int arr[32];
    int i = 0;
    printf("La valeur en binaire est : ");
    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("1 ");
    for (int j = i - 1; j>=0;j --) {
        printf("%d",arr[j]);
    }
    
    printf("\n");
}

int main() {
    int n;

    system("cls");
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    system("cls");
    printf("La valeur en hexadecimal est : %X\n", n);
    if (n > 0)
    {
       binaire(n); 
    }else if (n == 0)
    {
        printf("La valeur en binaire est : 0\n ");
    }else {
        negative(n);
    }
    
    
    

    return 0;
}
