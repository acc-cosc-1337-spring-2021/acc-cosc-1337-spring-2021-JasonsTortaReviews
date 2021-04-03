//cpp
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::endl; using std::vector;
using std::ostream;



void TicTacToe::display_board()const
{
	

	cout<<endl;

	cout<< "\t   Tic-Tac-Toe"<<endl;
	
	cout<<"\t\t  |\t  |"<<endl;

	cout<<"\t\t"<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<endl;

	cout<<"\t------+-"<<"--+------"<<endl;

	cout<<"\t\t"<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<endl;

	cout<<"\t------+-"<<"--+------"<<endl;

	cout<<"\t\t"<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<endl;

	cout<<"\t\t  |\t  |"<<endl;

	cout<<"\t  2 Player Game";



}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = player;
	setNextPlayer();

}

void TicTacToe::setNextPlayer()
{
	if(player == "X")
	{
		player = "O";
	}
	else if (player == "O")
	{
		player = "X";
	}
	// else 
	// {
	// 	cout<<"Bruh Enter Something Valid"<<endl;
	// }
}


void TicTacToe::start_game(std::string first_player)
{
	if(first_player == "X" || first_player == "O"|| first_player == "x" || first_player == "o")
	{
		first_player = player;
		clearBoard();
	}
	
}

void TicTacToe::clearBoard()
{
	for(auto peg : pegs)
	{
		cout<<" ";
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

