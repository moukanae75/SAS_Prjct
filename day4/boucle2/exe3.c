#include <stdio.h>

int main() {
    int n ,prime;
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    printf("tous les nombre primaire jusquau %d sont :\n",n);
    for (int i = 2; i < n; i++ )
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            
            if (i % j == 0)
            {
                prime = 0;
                break;
            }    
        }
        if (prime)
        {
        printf("%d ",i);
            
        }
         
    }
    
    return 0;
}