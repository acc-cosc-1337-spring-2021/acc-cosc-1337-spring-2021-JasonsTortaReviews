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
    cout<<"Opening File ... "<<endl;
    out_file.open("saved_games_winner.dat");
    if(out_file.is_open())
    {
        for(auto& game : games)
        {
            for(auto &peg : game ->get_pegs())
            {
                out_file<<peg<<endl;
            }

            out_file<<game->get_winner();
            out_file<<endl;
        }
        out_file.close();
    }
    else cout<<"ERROR UNABLE TO OPEN FILE"<<endl;
}

vector<unique_ptr<TicTacToe>>AllGameData::get_games()
{
    ifstream in_file;
    cout<<"Opening File ... "<<endl;
    string line;
    string winner;
    vector <unique_ptr<TicTacToe>> game_board;
    in_file.open("saved_games_winner.dat");

    if(in_file.is_open())
    {
        while(getline(in_file, line))
        {
            vector<string> pegs;
            auto length = line.length();
            size_t i = 0;
            for(size_t i = 0; i < length -1; ++i)
            {
                string character = " ";
                character += line[i];
               
                pegs.push_back(character);
            }

            winner = line[i];

            
            unique_ptr<TicTacToe> game;
            if(pegs.size()==9)
            {
               game = make_unique<Classic_TTT>(pegs,winner);
            }
            else if(pegs.size()==16)
            {
                game = make_unique<Connect4>(pegs,winner);
            }
            game_board.push_back(game);
        }

        in_file.close();
    }
    else{cout<<"ERROR FILE NOT FOUND"<<endl;}
    return game_board;
}

