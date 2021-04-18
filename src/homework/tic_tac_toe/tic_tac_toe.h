//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <string>
#include <vector>
using std::string; using std::vector; using std::cin; using std::cout; using std::endl; using std::ostream; using std::istream;


class TicTacToe
{

public: 
	//bool game_over();//done
	bool game_over()
	{

		if(check_row_win()==true )
		{
			set_winner();
			cout<<" Player "<<get_winner()<<" WON !"<<endl;
			clearBoard();
			return true;
		}
		else if(check_diagonal_win() == true)
		{
			set_winner();
			cout<<" Player "<<get_winner()<<" WON !"<<endl;
			clearBoard();
			return true;
		}
		else if (check_column_win()==true)
		{
			set_winner();
			cout<<" Player "<<get_winner()<<" WON !"<<endl;
			clearBoard();
			return true;
		}
		else if (checkBoardFull()==true)
		{
			winner = "C";
			cout<<" SADLY IT WAS A TIE !"<<endl;
			clearBoard();
			return true;
		}
		


		return false;
	}
	void start_game(string first_player);//done
	void mark_board(int position);//done
	string get_player() {return player;}//done
	void display_board()const;//done
	string get_winner() {clearBoard(); return winner;}
	

	friend ostream& operator<<(ostream& out, const TicTacToe& game);
	friend istream& operator >> (istream  &_in , TicTacToe& game);
private: 
	//void setNextPlayer();//done
	void setNextPlayer()
	{
		if(player == "X"||player=="x")
		{
			player = "O";
		}
		else if (player == "O"||player=="o")
		{
			player = "X";
		}
		
	}
	//bool checkBoardFull();//original
	bool checkBoardFull()
	{
		for(auto peg : pegs )
		{
			if(peg == " ")
			{
				return false;
			}
		}
		return true;
	}
	//void clearBoard();//done
	void clearBoard()
	{
		for(auto& peg : pegs)
		{
			peg= " ";
		}
	}
	//bool check_column_win();
	bool check_column_win()
	{
		
		if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
		{
			return true;
		}
		else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
		{
			return true;
		}
		else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
		{
			return true;
		}
		
		if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
		{
			return true;
		}
		else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
		{
			return true;
		}
		else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
		{
			return true;
		}
		return false;
		
	}
		//bool check_row_win();
		bool check_row_win()
	{
		if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
		{
			return true;
		}
		else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
		{
			return true;
		}
		else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
		{
			return true;
		}
		
		if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
		{
			return true;
		}
		else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
		{
			return true;
		}
		else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
		{
			return true;
		}
		
		
		return false;
			
	}
	//bool check_diagonal_win();
	bool check_diagonal_win()
	{
		if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
		{
			return true;
		}
		else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
		{
			return true;
		}
		
		if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
		{
			return true;
		}
		else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
		{
			return true;
		}
		
		return false;
		
	}

	//void set_winner();
	void set_winner()
	{
		if (player == "X")
		{
			winner = "O";
		}
		else if (player =="O")
		{
			winner = "X";
		}
		else {winner = "C";}
	}


	string player; 
	vector <string> pegs{9," "};
	string winner;

};
#endif