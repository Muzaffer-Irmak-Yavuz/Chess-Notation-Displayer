#ifndef TABLE_H
#define TABLE_H

#include "square.h"
#include "frame.h"

#include <stdio.h>

#define SQ_NUM (64)

struct Table
{
  Frame frame;
  Square square[SQ_NUM];
};

typedef struct Table Table;

void init_table(Table *table);

void print_table(Table *table);


#endif
