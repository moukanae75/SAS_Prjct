#include <stdio.h>

#define PI 3.141592653589793
struct Cercle
{
    double rayon;
};

double air(struct Cercle cer) {
    return PI * cer.rayon * cer.rayon ;
}

int main() {
    struct Cercle c = {3};
    printf("%.2lf",air(c));
    return 0;
}
