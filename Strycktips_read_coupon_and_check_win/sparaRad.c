#include <header.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <header.h>

int spara_resultat_i_text_fil()
{
    int i;
    char filnamn[128];
	//ber om namn
	printf("Vad vill du att din txt-fil ska heta(standard Windows regler for input galler har)\n");
    scanf("%123s", filnamn);
	
	//öppnar filen genom att ta filen och lägger till .txt
    FILE *f = fopen(strcat(filnamn, ".txt"), "w");
	//checkar om filen finns eller inte
	
    if (f == NULL)
    {
        printf("går inte att hitta filen. \n");
        return 0;
    }
	//skriver in resultatet i din txt fil
    
    for (i = 0; i < 13; i++)
    {
        if (i != 12)
        {
            if (Sbuff[i] == 1) // X
            {
                fprintf(f, "%c,", 88);
            }
            else if (Sbuff[i] == 0) // 1
            {
                fprintf(f, "%d,", 1);
            }
            else // 2
            {
                fprintf(f, "%d,", Sbuff[i]);
            }
        }
        else
        {
            if (Sbuff[i] == 1) // X
            {
                fprintf(f, "%c", 88);
            }
            else if (Sbuff[i] == 0) // 1
            {
                fprintf(f, "%d", 1);
            }
            else // 2
            {
                fprintf(f, "%d", Sbuff[i]);
            }
        }
    }
    
    fclose(f);
    printf("Resultat har sparats i din textfil.\n\n");
    return 0;
}