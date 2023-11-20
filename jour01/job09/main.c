#include <stdio.h>

int main()
{
    char *nom = "Pain au chocolat";
    float prix_unitaire = 1;
    int quantite_stock = 20;
    printf("%s - Prix: %.2f euros ; Qte.: %i\n", nom, prix_unitaire, quantite_stock);
    int quantite_souhaite;
    printf("Combien de %s souhaitez vous acheter? : ", nom);
    scanf("%d", &quantite_souhaite);
    if (quantite_souhaite <= quantite_stock)
    {
        quantite_stock -= quantite_souhaite;
        printf("Vous devez payer %.2f euros\n", quantite_souhaite * prix_unitaire);
    }
    else
    {
        printf("Nous sommes desoles, nous n'avons pas assez de stock\n");
    }

    printf("%s - Prix: %.2f euros ; Qte.: %i\n", nom, prix_unitaire, quantite_stock);
    printf("Attention notre produit %s a subit une augmentation de 10%c\n",nom, '%');
    prix_unitaire += prix_unitaire * 10 / 100;
    printf("%s - Prix: %.2f euros ; Qte.: %i\n", nom, prix_unitaire, quantite_stock);
}