//h
#ifndef Tic_Tac_Toe_Manager
#define Tic_Tac_Toe_Manager

#include <iostream>
using std::cout; using std::cin; using std::endl; using std::ostream;
#include "tic_tac_toe.h"
#include <vector>
using std::vector;
#include <string>
using std::string;


class TicTacToeManager
{
	public: 
		
		void saved_games(TicTacToe b);
		
		friend ostream& operator << (ostream& out, const TicTacToeManager& manager);

		void get_winner_total(int& x , int& o , int& t);


	

	private: 

		vector<TicTacToe> game; 
		

		int x_win = 0;
		int o_win = 0;
		int tie = 0;


		void update_winner_count(string winner)
		{
			if (winner == "X")
			{
				x_win++;
			}
			else if (winner == "O")
			{
				o_win++;
			}
			else 
			{
				tie++;
			}
		}

};

#endif 