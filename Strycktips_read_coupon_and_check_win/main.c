#include <stdio.h>
#include <header.h>

int main(){
    
	srand(time(NULL)); // sätter igång randomisern
	// De olika listorna
	
	int Matcher[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int results[13];

	int i = 0; int poang = 0;
	 char X = X; // Definiera space och bokstaven X från char.

	// Generera 13 olika poäng för de 13 olika matcherna i förväg
	while (poang < 13)
	{
		results[poang] = rand() % 3;
		poang++;
	}

	// Skriv 13 matcher och spara de sedan för at checka antalet rätt/fel
	printf("Din Strycktipskupong:\n\n");
	for (i = 0; i < 13; i++)
	{
		if (i < 9)
		{
			printf("Match:  %d%c", Matcher[i], ' ');
			if (results[i] == 0)
			{
				printf("%d%c\n", results[i] + 1, ' ');
                Sbuff[i] = 0;
			}
			else if (results[i] == 1)
			{
				printf("%c%c\n",' ', X);
                Sbuff[i] = 1;
			}
			else if (results[i] == 2)
			{
				printf("%c%d\n", '  ', results[i]);
                Sbuff[i] = 2;
			}
		}
		else
		{
			printf("Match:  %d%c", Matcher[i], ' ');
			if (results[i] == 0)
			{
				printf("%d%c\n", results[i] + 1, ' ');
                Sbuff[i] = 0; 
			}
			else if (results[i] == 1)
			{
				printf("%c%c\n",' ', X);
                Sbuff[i] = 1; 
			}
			else if (results[i] == 2)
			{
				printf("%c%d\n", '  ', results[i]);
                Sbuff[i] = 2; 
			}
		}
	}
    
    kolla_antalet_ratt(); // kolla antalet rätt/fel
    spara_resultat_i_text_fil(); // Sparar resultatet i textfil
    
	// Slut på koden
    // Avsluta.
	return 0;
}