#include <stdio.h>


struct rectangle {
    int langueur;
    int largeur;
};

int air(struct rectangle rec) {
    int air;
    air = rec.langueur * rec.largeur;
    
    return air;
}
int main() {
    struct rectangle rec =  
    {
        4,5
    };
    printf("l'air de rectangle est : %d",air(rec));
    return 0;
}