#include <stdio.h>
#include <windows.h>

void delay() {
    for (int i = 0;i <6;i++) {
        printf(".");
        Sleep(1000);
    }
}

int main() {
    double T;
    system("cls");

    printf("Entrer la Vitesse en Km/h: ");
    scanf("%lf", &T);
    T = T * 0.27778; 

    system("cls");
    printf("Conversion, veuillez patienter");
    
    delay();

    system("cls");
    printf("\nLa Vitesse est : %.5f m/s\n", T); 
    return 0;
}