#include <stdio.h>

int max(int a,int b) {
    if (a > b)
    {
        return a;
    }
    
    return b;
}
int main() {
    int a = 5;
    int b = 10;
    printf("%d\n",max(a,b));
    return 0;
}