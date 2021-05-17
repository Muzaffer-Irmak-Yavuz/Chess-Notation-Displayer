#ifndef PIECE_H
#define PIECE_H

#include "position.h"

#include <stdio.h>

enum Name {Pawn   , Rook,
           Knight , Bishop,
           Queen  , King};

enum Colour {White = 1 , Black = 2};

struct Piece
{
  enum Position pos;
  enum Name name;
  enum Colour colour;
};

typedef struct Piece Piece;

void init_pieces(Piece piece[32]);

void print_pieces(Piece piece[32]);

#endif
