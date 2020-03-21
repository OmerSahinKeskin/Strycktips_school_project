#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <header.h>

int * generate_num()
{
    // En funktion som genererar fram 6 st olika tal genom att först ta fram alla siffror mellan 0-13 och sedan plockar 6 randomiserade nummer. 
    // Denna funktion utför det på sådant sätt att alla 6 tal är åtskilda från andra och inte samma vilket underlättar garderingen.
    srand(time(NULL));
    int talordning[13];
    int i = 0; int j = 0; int temp = 0;
    
    for (i = 0; i< 13; i++)
    {
        talordning[i] = i + 1;
    }
    
    for (i = 0; i < 6; i++)
    {
        j = (rand() % 12) + 1;
        temp = talordning[i];
        talordning[i] = talordning[j];
        talordning[j] = temp;
    }
    for (i = 0; i < 6; i++)
    {
        garderingar[i] = talordning[i];
    }
    return talordning; 
}
