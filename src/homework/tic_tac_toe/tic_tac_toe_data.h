//h
#ifndef TIC_TAC_TOE_DATA
#define TIC_TAC_TOE_DATA

#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <fstream>
#include <memory>

using namespace std; 

class AllGameData 
{
public:
    void saved_games(const vector<unique_ptr<TicTacToe>> & games);

    vector<unique_ptr<TicTacToe>> get_games();
   



};


#endif






















