#include <stdio.h>
#include <windows.h>

void delay() {
    for (int i = 0;i <6;i++) {
        printf(".");
        Sleep(1000);
    }
}

int main() {
    float T;
    system("cls");

    printf("Entrer la Distance en Km: ");
    scanf("%f", &T);
    T = T * 1093.61; 

    system("cls");
    printf("Conversion, veuillez patienter");
    
    delay();

    system("cls");
    printf("\nLa Distance est : %.2f Yards\n", T); 
    return 0;
}