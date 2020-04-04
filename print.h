#include "types.h"

#ifndef PRINT_H
#define PRINT_H

#define ROWS 25
#define COLS 80

#define CLR_BLACK         0
#define CLR_BLUE          1
#define CLR_GREEN         2
#define CLR_CYAN          3
#define CLR_RED           4
#define CLR_MAGENTA       5
#define CLR_BROWN         6
#define CLR_LIGHT_GREY    7
#define CLR_DARK_GREY     8
#define CLR_LIGHT_BLUE    9
#define CLR_LIGHT_GREEN   10
#define CLR_LIGHT_CYAN    11
#define CLR_LIGHT_RED     12
#define CLR_LIGHT_MAGENTA 13
#define CLR_LIGHT_BROWN   14
#define CLR_WHITE         15

typedef struct {
  unsigned char ch;
  unsigned char clr;
} __attribute__((packed)) cell;

void init_serial();
void clear_screen(void);
void print(char *str);

#endif
