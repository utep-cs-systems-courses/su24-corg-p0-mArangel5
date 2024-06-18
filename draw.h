#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_char_5x7(char c);
void print_char_11x16(short c);
void print_arrow(int leftCol, int squaresize, int trianglesize);

extern const unsigned char font_5x7[96][5];
extern const unsigned char font_11x16[95][11];

#endif
