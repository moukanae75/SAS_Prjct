#include <stdio.h>
#include <ctype.h>
int main() {
    char s;
    char d;
    system("cls");
    printf("Entrer un character : ");
    scanf("%c",&s);
    if (s >= 65 && s <= 90 )
    {
        d = tolower(s);
    }else {
        d = s;
    }
    
    switch (d)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        printf("%c est un voyelle",s);
        break;

    default:
        printf("%c n'est pas un voyelle ",s);
        break;
    }
    
    
    return 0;
}