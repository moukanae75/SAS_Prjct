#include <stdio.h>

int somme(int a,int b) {
    return a + b;
}
int main() {
    int a = 5;
    int b = 10;
    printf("%d",somme(a,b));
    return 0;
}