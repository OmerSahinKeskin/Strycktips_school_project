#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int antal_rader = 13;
int slumpa; //värderna 1,x,2
int antalet_resultat=3; //hur många resultat som ska slumpas
char resultat[3];
int i=0;


int main()
{
printf("Din Stryktips Rad ar\n");

srand(time(NULL));
for(i; i<antal_rader; i++)
{ 
 slumpa=rand() %antalet_resultat;
 switch(slumpa)
 {
    case 0: resultat[0]='1'; break;
    case 1: resultat[1]='X'; break;
    case 2: resultat[2]='2'; break;
    
 }
   
 
 printf("Match  %d",i+1 );
    for(int p=0;p<3;p++)
    {
      printf("    ");
      if (p==slumpa)
        {
          printf("%c",resultat[p] );
        }
    }
    printf("\n" );
  }
  printf("\n \n" );
}



