//h
#ifndef CONNECT4
#define CONNECT4

#include "tic_tac_toe.h"
#include <string>
#include <vector>


class Connect4 : public TicTacToe
{
public:
    
    
    Connect4() : TicTacToe(4){}
    Connect4(vector<string> p , string winner):TicTacToe(p, winner){};


private: 

    bool check_row_win() override;

    bool check_column_win() override;

    bool check_diagonal_win() override;



};
#endif



