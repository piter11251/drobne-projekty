// przeliczanie jednostek
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zamiana_c_na_f(int stopnie)
{
    return (2*(stopnie - (0.1*stopnie))+32);
}

float metry_na_kilometry(int predkosc)
{
    return predkosc * 3.6;
}

float kalkulator_walut(float wartosc)
{
    int wybor;
    printf("Na jaka walute?(euro/dolar/frank szwajcarski/funt brytyjski)");
    scanf("%d", &wybor);
    switch(wybor)
    {
        case 1:
            return wartosc / 4.64;
            break;
        case 2:
            return wartosc / 4.20;
            break;
        case 3:
            return wartosc / 4.54;
        case 4:
            return wartosc / 5.51;
            break;
    }
    return 0;
}

int main()
{
    int wybor;
    printf("Przeliczanie: 1.Stopni Celsjusza na Fahrenheita, 2. m/s na km/h, 3.waluty >");
    scanf("%d", &wybor);
    if(wybor == 1)
    {
        int stopnie;
        scanf("%d", &stopnie);
        printf("%d stopni Celsjusza to %d stopni Fahrenheita\n",stopnie, zamiana_c_na_f(stopnie));
    }
    else if(wybor == 2)
    {
        int predkosc;
        scanf("%d", &predkosc);
        printf("%d m/s to %.2f km/h", predkosc , metry_na_kilometry(predkosc));
    }
    else if(wybor == 3)
    {
        float wartosc;
        scanf("%f", &wartosc);
        printf("%.2f", kalkulator_walut(wartosc));
    }
    return 0;
}
