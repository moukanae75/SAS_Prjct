#include <stdio.h>
#include <windows.h>

void delay() {
    for (int i = 0;i <6;i++) {
        printf(".");
        Sleep(1000);
    }
}

int main() {
    printf("hello");
    float T;
    system("cls");

    printf("Entrer la temperature en Celsius : ");
    scanf("%f", &T);
    T = T + 273.15; 

    system("cls");
    printf("Conversion, veuillez patienter");
    
    delay();

    system("cls");
    printf("\nLa temperature est : %.2f kelvin\n", T); 
    
    return 0;
}
