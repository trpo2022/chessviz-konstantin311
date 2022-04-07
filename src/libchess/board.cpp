#include <iostream>
#include <string>
#include <libchess/board.h>

using namespace std;

void print_board(char board[size][size])
{
    int i = 0, j = 0;
    printf("\n");
    for (i = 0; i < size; i++) {
        printf("%d ", size - i);
        for (j = 0; j < size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h \n");
}

int count_step(string step, int x, char y)
{
    int razn = (int)step[x] - y;
    return razn;
}

void take_step(string step, motion& motion)
{
    motion.column_1 = size - count_step(step, 1, '0');
    motion.line_1 = count_step(step, 0, 'a');
    motion.column_2 = size - count_step(step, 4, '0');
    motion.line_2 = count_step(step, 3, 'a');
}

int turn(string step, motion motion, char print_board[size][size])
{
    char buf;
    take_step(step, motion);
    buf = print_board[motion.column_1][motion.line_1];
    print_board[motion.column_1][motion.line_1] = ' ';
    print_board[motion.column_2][motion.line_2] = buf;
    return 0;
}
