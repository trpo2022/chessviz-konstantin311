#include <iostream>
#include <string>
#include <libchess/board.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char board[size][size]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    system("clear");
    motion motion;
    printf("Для окончания игры введите 'exit'\n");
    print_board(board);
    string step;
    while (true) {
        cin >> step;
        if (step == "exit") {
            printf("Вы вышли из игры");
            break;
        }
        if (turn(step, motion, board) != 0) {
            continue;
        }

        print_board(board);
        printf("\n");
    }
    return 0;
}

