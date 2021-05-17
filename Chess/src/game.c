#include "../headers/game.h"



void game_loop()
{
  Table *table = (Table *)malloc(sizeof(Table));
  init_table(table);

  Piece piece[32];
  init_pieces(piece);

  connect_table_w_frame(table ,piece);

  print_menu_screen();

  char *buffer =(char *)malloc(sizeof(char) *1024);
  if(buffer == NULL)
    perror("deneme");
  read(0 ,buffer ,1024);
  char list[200][10];

  int maxIndex = split_string(buffer , list);

  if(list[0] != NULL)
  {
    printf("GAME FOUND! HERE THE MOVES\n");
  }



  for (int i = 0; i < maxIndex -1; i++) {

    printf("%s\n",list[i]);
  }




  print_table(table);

  munmap(buffer ,1024);
  free(table);
}
