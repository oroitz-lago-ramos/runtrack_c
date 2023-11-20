#include <stdio.h>
int main()
{
    printf("Premiere methode: %s\n", "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    char c;
    printf("Deuxieme methode: ");
    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", c);
    }
}