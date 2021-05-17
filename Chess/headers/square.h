#ifndef SQUARE_H
#define SQUARE_H

#include "position.h"

#include <stdbool.h>

struct Square
{
  bool isBlank;
  enum Position pos;
};

typedef struct Square Square;



#endif
