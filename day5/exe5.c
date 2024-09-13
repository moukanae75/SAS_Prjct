#include <stdio.h>

int factoriel(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    
    return res;
}
int main() {
    int n = 3;
    printf("%d\n",factoriel(n));
    return 0;
}