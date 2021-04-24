//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <string>
#include <vector>
using std::string; using std::vector; using std::cin; using std::cout; using std::endl; using std::ostream; using std::istream;
#include <memory>
using std::unique_ptr;

class TicTacToe
{
	
public: 
	TicTacToe(){}
	TicTacToe(int SIZE) : pegs(SIZE*SIZE," "){}
	
	bool game_over();//done
	
	void start_game(string first_player);//done
	void mark_board(int position);//done
	string get_player() {return player;}//done
	void display_board()const;//done
	string get_winner() {clearBoard(); return winner;}
	

	friend ostream& operator<<(ostream& out, const TicTacToe& game);
	friend istream& operator >> (istream  &in , TicTacToe& game);


protected:

	vector<string> pegs ;

	virtual bool check_column_win();
	
	virtual bool check_row_win();

	virtual bool check_diagonal_win();

private:

	void setNextPlayer();//done

	bool checkBoardFull();//original

	void clearBoard();//done

	void set_winner();
	
	string player; 
	//vector <string> pegs{9," "};
	string winner;

};
#endif