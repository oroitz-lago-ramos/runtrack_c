#include <stdio.h>

int main()
{
int i,j, choix_utilisateur;
    printf("Entrez un chiffre: ");
    scanf("%d", &choix_utilisateur);
    if (choix_utilisateur > 0) {
        for (i = 1; i <= choix_utilisateur; i++)
        {
            printf("Table de %i\n", i);
            for (j = 1; j < 11; j++)
            {
                printf("%i x %i = %i\n", i, j, j * i);
            }
            printf("\n");
        }
    } else 
    {
        printf("Desole le chiffre que vous avez insere est invalide");
    }
    
}