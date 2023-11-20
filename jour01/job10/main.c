#include <stdio.h>

int main()
{
    float montant_initial = 11000;
    float taux_annuel = 2;
    float gain = montant_initial * taux_annuel / 100;
    printf("Le gain au bout d'une annee sera : %.2f euros\n",gain);
    montant_initial += 5000;
    taux_annuel += 2; 
    gain = montant_initial * taux_annuel / 100;
    printf("Si le capital initial augmente de 5000 euros, le gain au bout d'une annee sera : %.2f euros\n", gain);
    float montant_total = montant_initial + gain;
    printf("Suposons maintenant que l'utilisateur veut retirer 10%c de son montant total au bout d'un an qui est de  %.2f euros\n", "%", montant_total);
    montant_total -= montant_total * 10 / 100;
    montant_initial = montant_total;
    taux_annuel -= 1;
    gain = montant_initial * taux_annuel / 100;
    printf("Le gain au bout de la prochaine annee sera : %.2f euros\n", gain);
}