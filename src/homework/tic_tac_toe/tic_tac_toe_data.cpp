//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include<memory>
using std::make_unique;



void AllGameData::saved_games(const vector<unique_ptr<TicTacToe>> & games)
{
    ofstream out_file;
    
    out_file.open(TIC_TAC_TOE_DATA_FILE);
    if(out_file.is_open())
    {
        for(auto& game : games)
        {
            for(auto &peg : game ->get_pegs())
            {
                out_file<<peg;
            }

            out_file<<endl;
            out_file<<game-> get_winner();
        }
        
    }
    // else {cout<<"ERROR UNABLE TO OPEN FILE"<<endl;}
    out_file.close();
}

vector<unique_ptr<TicTacToe>>AllGameData::get_games()
{
    ifstream in_file;
    
    string line;
    vector <unique_ptr<TicTacToe>> game_board;
    in_file.open(TIC_TAC_TOE_DATA_FILE);

    if(in_file.is_open())
    {
        while(getline(in_file, line))
        {
            vector<string> pegs;
            for(size_t i = 0; i <(line.size() - 1); ++i)
            {
                string character(1 , line[i]);
               
                pegs.push_back(character);
            }

             string winner{line[line.size()-1]}; 

            
            unique_ptr<TicTacToe> game;
            if(pegs.size()==9)
            {
               game = make_unique<Classic_TTT>(pegs,winner);
            }
            else if(pegs.size()==16)
            {
                game = make_unique<Connect4>(pegs,winner);
            }
            
            

            // game_board.push_back(std::move(game)); CAUSES ERROR
     
        }

        in_file.close();
    }
    
    return game_board;
}

