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
    Classic_TTT(vector<string> p, string win):TicTacToe(p, win){}

     
    



private:

    bool check_row_win() override;

    bool check_column_win() override;

    bool check_diagonal_win() override;


};

#endif
