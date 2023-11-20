#include <stdio.h>
#include <string.h>

int main()
{
    char *chaine = "test";
    size_t length = strlen(chaine);
    int found = 0;
    for (int i = 0; i < length; i++)
    {
        if (chaine[i] == 'e')
        {
            found += 1;
        }
    }
    if (found > 0)
    {
        printf("Cette chaine contient la lettre e");
    }
    else
    {
        printf("Cette chaine ne contient pas de e");
    }
    return 0;
}