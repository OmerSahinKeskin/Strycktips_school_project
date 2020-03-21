#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <conio.h>
#include <header.h>

int main() 
{
    //sätter igång randomiser
	srand(time(NULL));
	// De olika listorna
	int matcher[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int results[13];
    
	int i = 0; int poang = 0; 
	char X = 88;
    generate_num();
	while (poang < 13)
	{
		results[poang] = rand() % 3;
		poang++;
	}
    
	// generera 13 matcher som ska garderas
	printf("Din Strycktipskupong - ett 64-raderssystem: \n\n");
	for (i = 0; i < 13; i++)
	{
		if (i < 9)
		{
            printf("Match  %d%c%c%c", matcher[i], 58, ' ', ' ');
            if (checkList(matcher[i]) != 0)
            {
                int x = rand() % 2;
                if (results[i] == 0) // 1
			    {
                    if (x == 0)
                    {
                        printf("%d %c\n", results[i] + 1, X);
                    }
                    else if (x == 1)
                    {
                        printf("%d%c  2\n", results[i] + 1, ' ');
                    }   
			    }
			    else if (results[i] == 1) // X
			    {
                    if (x == 0)
                    {
                        printf("1%c%c%c\n", ' ', X, ' ');
                    }
				    else if (x == 1)
                    {
                        printf("%c%c%c 2\n", ' ', ' ', X);
                    }
			    }
			    else if (results[i] == 2) // 2
			    {
                    if (x == 0)
                    {
                        printf("1%c%c%d\n", ' ', ' ', results[i]); // JA
                    }
                    else if (x == 1)
                    {
                        printf("%c%c%c%d\n", ' ', ' ', X, results[i]); // JA!
                    }
			    	
			    }
            }
            else
            {
                if (results[i] == 0)
			    {
				    printf("%d%c%c\n", results[i] + 1, ' ', ' ');
			    }
			    else if (results[i] == 1)
			    {
				    printf("%c%c%c\n", ' ', ' ', X);
                }
			    else if (results[i] == 2)
			    {
				    printf("%c%c%d\n", ' ', ' ', results[i]);
			    }
            }
            
		}
		else
		{
			printf("Match %d%c%c%c", matcher[i], 58, ' ', ' ');
			if (checkList(matcher[i]) != 0)
            {
                int x = rand() % 2;
                if (results[i] == 0) // 1
			    {
                    if (x == 0)
                    {
                        printf("%d %c\n", results[i] + 1, X);
                    }
                    else if (x == 1)
                    {
                        printf("%d%c  2\n", results[i] + 1, ' ');
                    }   
			    }
			    else if (results[i] == 1) // X
			    {
                    if (x == 0)
                    {
                        printf("1%c%c%c\n", ' ', X, ' '); 
                    }
				    else if (x == 1)
                    {
                        printf("%c%c%c 2\n", ' ', ' ', X);
                    }
			    }
			    else if (results[i] == 2) // 2
			    {
                    if (x == 0)
                    {
                        printf("1%c%c%d\n", ' ', ' ', results[i]);
                    }
                    else if (x == 1)
                    {
                        printf("%c%c%c%d\n", ' ', ' ', X, results[i]);
                    }
			    	
			    }
            }
            else
            {
                if (results[i] == 0)
			    {
				    printf("%d%c%c\n", results[i] + 1, ' ', ' ');
			    }
			    else if (results[i] == 1)
			    {
				    printf("%c%c%c\n", ' ', ' ', X);
                }
			    else if (results[i] == 2)
			    {
				    printf("%c%c%d\n", ' ', ' ', results[i]);
			    }
            }
		}
	}
    printf("\n");
	return 0;
}

//kolar om den ska garderas
int checkList(int* val) 
{
    int i;
    for (i=0; i < 6; i++) 
    {
        if (val == garderingar[i])
        {
            return 1;
        }
    }
    return 0;
}