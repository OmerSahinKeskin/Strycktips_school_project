#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <header.h>
#include <ctype.h>

int kolla_antalet_ratt() 
{

  char *line, *ok;
  char buff[256];
  char delim[] = ",";
  
  FILE *fp;
  
  if ((fp = fopen("RattRad.csv", "r")) == NULL) {
    fprintf(stderr, "Filen RattRad.csv gick inte att öppna\n");
    exit(-1);
  }
//checkar om hur många rätt eller fel du har

  fgets(buff, 256, fp);
  buff[strlen(buff) - 1] = '\0'; 
  line = strdup(buff);

  ok = strtok(line, delim);
  int i = 0;
  
  int ratt = 0; int fel = 0;
  
  for (i = 0; i < 13; i++)
  {
      if (ok != NULL)
      {
          if(atoi(ok) == 1) // Om 1
          {
              if (Sbuff[i] == 0)
              {
                  ratt++;
              }
              else
              {
                  fel++;
              }
          }
          else if (atoi(ok) == 2) // Om 2
          {
             if (Sbuff[i] == 2)
             {
                 ratt++;
             }
             else
             {
                 fel++;
             }
          }
          else if (ok != NULL) // Om X
          {
             if (Sbuff[i] == 1)
             {
                 ratt++;
             }
             else
             {
                 fel++;
             }
          }
      }
      ok = strtok(NULL, delim);
  }
  
  printf("\nAntal r%ctt:  %d\n", 132, ratt);
  printf("Antal fel:   %d\n\n", fel);
  free(line); free(ok);
  fclose(fp);
  return 0;
}
