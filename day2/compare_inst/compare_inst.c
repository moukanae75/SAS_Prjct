#include <stdio.h>


int conv_sec(int heures, int minutes, int secondes) {
    return heures * 3600 + minutes * 60 + secondes;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2; 
    system("cls");
    
    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);


    printf("Entrez le deuxieme instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    
    int secondes1 = conv_sec(h1, m1, s1);
    int secondes2 = conv_sec(h2, m2, s2);

    
    if (secondes1 < secondes2) {
        printf("Le premier instant vient avant le deuxieme.\n");
    } else if (secondes1 > secondes2) {
        printf("Le deuxieme instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du meme instant.\n");
    }

    return 0;
}
