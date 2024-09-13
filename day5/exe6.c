#include <stdio.h>

int Fibonacci(int n) {
    int a,b,c;
    if (n < 1)
    {
        return 1;
    }
    if (n == 1)
    {
        printf("1");
        return 0;
    }
    
    
    int true = 0;
     for (int i = 3; i <= n + 1; i++) {
        
        c = a + b; 
        a = b;     
        b = c;
    }
    printf("%d ", c);

    
    
    return 0;
}

int main() {
    int n;
    n = 6;
    if (Fibonacci != 0)
    {
        Fibonacci(n);
        
    }
    
    return 0;
}