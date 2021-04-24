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


private: 

    bool check_row_win();

    bool check_column_win();

    bool check_diagonal_win();



#endif




};