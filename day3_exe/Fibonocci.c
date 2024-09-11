#include <stdio.h>

int Fibonacci(int n) {
    
    if (n <= 0) {
        return 0; 
    } else if (n == 1) {
        return 1;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    system("cls");
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    
    printf("Fibonacci de %d est %d\n", n, Fibonacci(n));
    
    return 0;
}
