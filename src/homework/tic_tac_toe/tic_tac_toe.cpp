//cpp
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::endl; using std::vector;
using std::ostream;



void TicTacToe::display_board()const
{
	

	cout<<endl;

	cout<< " |~~~~~Tic-Tac-Toe~~~~~|"<<endl;
	
	cout<<"\t\t  |\t  |"<<endl;

	cout<<"\t\t"<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<endl;

	cout<<"\t------+-"<<"--+------"<<endl;

	cout<<"\t\t"<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<endl;

	cout<<"\t------+-"<<"--+------"<<endl;

	cout<<"\t\t"<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<endl;

	cout<<"\t\t  |\t  |"<<endl;

	cout<<" |~~~~~2 Player Game~~~~|";



}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = player;
	
	setNextPlayer();

}

void TicTacToe::setNextPlayer()
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


void TicTacToe::start_game(std::string first_player)
{


	this ->player  = first_player;

	clearBoard();

}

void TicTacToe::clearBoard()
{
	for(auto& peg : pegs)
	{
		peg= " ";
	}
}

bool TicTacToe::checkBoardFull()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_column_win()
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
bool TicTacToe::check_diagonal_win()
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

void TicTacToe::set_winner()
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

bool TicTacToe::game_over()
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