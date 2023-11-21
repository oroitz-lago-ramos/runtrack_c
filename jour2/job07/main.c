#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[260];
    strcpy(alphabet, "abcdefghijklmnopqrstuvwxyz");
    for (int i = 1; i < 10; i++)
    {
        strcat(alphabet, "abcdefghijklmnopqrstuvwxyz");
    }

    int length = strlen(alphabet);
    for (int i = 0; i < length; i += 2)
    {
        printf("%.*s\n", i + 1, alphabet);
    }

    return 0;
}