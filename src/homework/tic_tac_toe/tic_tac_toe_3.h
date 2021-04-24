//h
#ifndef CLASSIC_TTT
#define CLASSIC_TTT

#include "tic_tac_toe.h"
#include <string>
#include <vector>

class Classic_TTT : public TicTacToe
{
public:
    
    Classic_TTT() : TicTacToe(3){}



private:

    bool check_row_win();

    bool check_column_win();

    bool check_diagonal_win();



#endif

};