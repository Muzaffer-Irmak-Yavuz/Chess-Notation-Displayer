#include "../headers/move.h"


void connect_table_w_frame(Table *table ,Piece piece[32])
{



  int y = 1;
  for (size_t blackIter = 0, x = 2; blackIter != 16 ; blackIter++ ,x += 4)
  {
    if(blackIter == 8)
    {
      y += 2;
      x = 2;
    }


    {
      if(piece[blackIter].name == Rook)
      {
        table -> frame.frame[y][x] = 'r';

      }
      else if(piece[blackIter].name == Knight)
      {
        table -> frame.frame[y][x] = 'n';

      }
      else if(piece[blackIter].name == Bishop)
      {
        table -> frame.frame[y][x] = 'b';

      }
      else if(piece[blackIter].name == Queen)
      {
        table -> frame.frame[y][x] = 'q';

      }
      else if(piece[blackIter].name == King)
      {
        table -> frame.frame[y][x] = 'k';

      }
      else if(piece[blackIter].name == Pawn)
      {
        table -> frame.frame[y][x] = 'p';

      }

    }
  }


  int ye = 13;
  for (size_t whiteIter = 16 ,x = 2; whiteIter < 32; whiteIter++ , x +=4)
  {
    if(whiteIter == 24)
    {
      ye += 2;
      x = 2;
    }



      if(piece[whiteIter].name == Rook)
        table -> frame.frame[ye][x] = 'R';

      else if(piece[whiteIter].name == Knight)
        table -> frame.frame[ye][x] = 'N';

      else if(piece[whiteIter].name == Bishop)
        table -> frame.frame[ye][x] = 'B';

      else if(piece[whiteIter].name == Queen)
        table -> frame.frame[ye][x] = 'Q';

      else if(piece[whiteIter].name == King)
        table -> frame.frame[ye][x] = 'K';

      else if(piece[whiteIter].name == Pawn)
        table -> frame.frame[ye][x] = 'P';

  }

}
