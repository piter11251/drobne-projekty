#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int czy_palindrom(char napis[], int n)
{
    int j = n-1;
    int i = 0;
    while(j>=0 && i<n)
    {
        if(napis[i]!=napis[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}



int main()
{
    char napis[100];
    scanf("%s", napis);
    int n = strlen(napis);
    int wynik = czy_palindrom(napis, n);
    if(wynik==1)
        printf("%s jest palindromem", napis);
    else
        printf("%s nie jest palindromem", napis);

    return 0;
}
