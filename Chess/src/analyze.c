#include "../headers/analyze.h"


int split_string(char *string , char list[200][10])
{


  const char delim[2] = " ";

  char *moveString ;


  moveString = strtok(string , delim);

  int indexCounter = 1;
  int i = 0;


  while(moveString != NULL)
  {
    
    strcpy(list[i++] ,moveString);
    moveString = strtok(NULL , delim);
    indexCounter++;
  }







  free(moveString);
  return indexCounter;
}
