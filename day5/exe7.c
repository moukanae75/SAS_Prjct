#include <stdio.h>
#include <string.h>
void reverse(char str[]);

int main() {
    char str[] = "abcde";
    reverse(str);
    return 0;
}
void reverse(char str[]) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c",str[i]);
    }
    
    
}