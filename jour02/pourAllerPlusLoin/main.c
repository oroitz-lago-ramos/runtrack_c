#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, hypothenuse;
    float cotes[3];
    printf("Entrez le premier cote: ");
    scanf("%d", &a);
    printf("Entrez le deuxieme cote: ");
    scanf("%d", &b);
    printf("Entrez le troisieme cote: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        hypothenuse = a;
        cotes[0] = b;
        cotes[1] = c;
    }
    else if (b >= a && b >= c)
    {
        hypothenuse = b;
        cotes[0] = a;
        cotes[1] = c;
    }
    else
    {
        hypothenuse = c;
        cotes[0] = b;
        cotes[1] = a;
    }

    if (hypothenuse < cotes[0] + cotes[1])
    {
        if (hypothenuse == cotes[0] && hypothenuse == cotes[1])
        {
            printf("Le triangle est equilateral");
        }
        else if (cotes[0] == cotes[1])
        {
            ;
            if (pow(hypothenuse, 2) == pow(cotes[0], 2) + pow(cotes[1], 2))
            {
                printf("Le triangle est rectangle isocele");
            }
            else
            {
                printf("Le triangle est isocele");
            }
        }
        else if (pow(hypothenuse, 2) == pow(cotes[0], 2) + pow(cotes[1], 2))
        {
            printf("Le triangle est rectangle");
        }
        else
        {
            printf("Triangle est constructible et quelconque");
        }
    }
    else
    {
        printf("Le triangle n'est pas constructible");
    }
    return 0;
}