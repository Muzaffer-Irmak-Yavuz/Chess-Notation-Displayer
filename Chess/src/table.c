#include "../headers/table.h"


void init_table(Table *table)
{
  // init table coordinates
  for(int sqIter = 0; sqIter < SQ_NUM; sqIter++)
  {
    table -> square[sqIter].pos = (enum Position)sqIter;
  }

  //frame variables;
  const char wall = '|';
  const char roof = '-';


  //adding walls and roofs
  char numCounter = 56;
  for(int y = 0; y < FR_Y;y++)
  {

    if(y % 2 != 0 && y != FR_Y -1)
      table -> frame.frame[y][34] = numCounter--;

    for(int x = 0; x < FR_X -2 ;x++)
    {
      table -> frame.frame[y][x] = ' ';
      if(y % 2 == 0)
      {

        if(x == 0 || !(x % 4))
          table -> frame.frame[y][x] = wall;
        else
          table -> frame.frame[y][x] = roof;
      }
      else if(y % 2 != 0 && y != FR_Y -1 )
      {

        if(x == 0 || !(x % 4))
          table -> frame.frame[y][x] = wall;
        else
          table -> frame.frame[y][x] = ' ';

      }
    }// x end
  }//y end

  char alphaCounter = 65;
  for (int x = 2; x < FR_X -2; x += 4)
  {

      table -> frame.frame[FR_Y -1][x] = alphaCounter++;

  }

  return;
}// func end





void print_table(Table *table)
{
  for (int y = 0; y < FR_Y; y++) {
    for (int x = 0; x < FR_X; x++) {
      printf("%c",table -> frame.frame[y][x]);
    }
    printf("\n");
  }
}
