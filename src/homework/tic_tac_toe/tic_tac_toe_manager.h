//h
#ifndef Tic_Tac_Toe_Manager
#define Tic_Tac_Toe_Manager

#include <iostream>
using std::cout; using std::cin; using std::endl; using std::ostream;
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <vector>
using std::vector;
#include <string>
using std::string;
#include<memory>
using std::unique_ptr;


class TicTacToeManager
{
	public: 
		TicTacToeManager() = default;
		TicTacToeManager(AllGameData & data);
		~TicTacToeManager();
		
		void saved_games(unique_ptr<TicTacToe> &b);
		
		friend ostream& operator << (ostream& out, const TicTacToeManager& manager);

		void get_winner_total(int& x , int& o , int& t);


	private: 
		vector <unique_ptr<TicTacToe>> games; 
		AllGameData database;
	
		int x_win = 0;
		int o_win = 0;
		int tie = 0;

		void update_winner_count(string winner);
};

#endif 