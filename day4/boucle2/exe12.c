#include <stdio.h>

void bubbleSort(int array[], int n) {
    int temp;
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1 ; j++) {
            
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    system("cls");
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int array[n];

    printf("Entrez les %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    printf("Tableau trie :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
