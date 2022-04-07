#include <iostream>
#include <string>

#define size 8

using namespace std;

struct motion {
    int column_1;
    int line_1;
    int column_2;
    int line_2;
};

void print_board(char board[size][size]);

void take_step(string step, motion& motion);

int turn(string step, motion motion, char print_board[size][size]);

