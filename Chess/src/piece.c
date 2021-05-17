#include "../headers/piece.h"


void init_pieces(Piece piece[32])
{
  for(int blackIter = 0; blackIter < 16; blackIter++)
  {
    piece[blackIter].pos = (enum Position) blackIter;
    piece[blackIter].colour = Black;
    if (blackIter > 7) {
      piece[blackIter].name = Pawn;
    }
  }

  piece[0].name = Rook;
  piece[1].name = Knight;
  piece[2].name = Bishop;
  piece[3].name = Queen;
  piece[4].name = King;
  piece[5].name = Bishop;
  piece[6].name = Knight;
  piece[7].name = Rook;

  for (int whiteIter = 16; whiteIter < 32; whiteIter++) {
    piece[whiteIter].pos = (enum Position) whiteIter;
    piece[whiteIter].colour = White;

    if(whiteIter < 24)
      piece[whiteIter].name = Pawn;
  }

  piece[24].name = Rook;
  piece[25].name = Knight;
  piece[26].name = Bishop;
  piece[27].name = Queen;
  piece[28].name = King;
  piece[29].name = Bishop;
  piece[30].name = Knight;
  piece[31].name = Rook;

  return;
}



void print_pieces(Piece piece[32])
{
  for (int pieceIter = 0; pieceIter < 32; pieceIter++)
  {
    printf("%d %d       ",piece[pieceIter].pos ,piece[pieceIter].name);
  }
}
