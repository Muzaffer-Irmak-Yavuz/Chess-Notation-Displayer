#ifndef MOVE_H
#define MOVE_H


// Move connect piece and table

#include "table.h"
#include "piece.h"


// get data from analyze
// convert it to Move
// sync table and piece according to move

struct Move
{
  enum Position curPiecesPos[2]; // current piece position
  enum Position posPiecesGo[2];
};

void connect_table_w_frame(Table *table ,Piece piece[32]);



#endif
