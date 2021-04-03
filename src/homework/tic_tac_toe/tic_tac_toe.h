//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <string>
#include <vector>
using std::string; using std::vector; using std::cin; using std::cout; using std::endl;


class TicTacToe
{

public: 
	bool game_over(){return checkBoardFull();}//done
	void start_game(string first_player);//done
	void mark_board(int position);//done
	string get_player() {return player;}//done
	void display_board()const;//done

private: 
	void setNextPlayer();//done
	bool checkBoardFull();//done
	void clearBoard();//done

	string player; 
	vector <string> pegs{9," "};

};
#endif