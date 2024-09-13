#include <stdio.h>

int pariter(int n) {
    if (n % 2 != 0)
    {
        return 1;
    }
    
    return 0;
}
int main() {

    printf("%d",pariter(8));
    return 0;
}