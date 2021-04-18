//cpp
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::endl; using std::vector;
using std::ostream; using std::istream;



ostream& operator<<(ostream& out, const TicTacToe& game)
{
	

	out<<endl;

	out<< " |~~~~~Tic-Tac-Toe~~~~~|"<<endl;
	
	out<<"\t\t  |\t  |"<<endl;

	out<<"\t\t"<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<endl;

	out<<"\t------+-"<<"--+------"<<endl;

	out<<"\t\t"<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<endl;

	out<<"\t------+-"<<"--+------"<<endl;

	out<<"\t\t"<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<endl;

	out<<"\t\t  |\t  |"<<endl;

	out<<" |~~~~~2 Player Game~~~~|";

	return out;

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

istream& operator >> (istream  &in , TicTacToe& game)
{
    int position;
	
	// string first_player;
	// string second_player; 

	// cout<<"Player - 1 choose your Mark ( X or O ): ";cin>>first_player;cout<<endl;
	
	// if (first_player=="x")
	// {
	// 	first_player = "X";
	// }
	// else if (first_player == "o")
	// {
	// 	first_player = "O";
	// }

	// while(first_player != "X" && first_player!=  "O")
	// {
	// 	cout<<"Mark can only be X or O !"<<endl;
	// 	cout<<endl<<"Now Try Again Choose Your Mark: ";cin>>first_player;cout<<endl;
	// }

	// if(first_player == "X" || first_player == "x")
	// {
	// 	second_player = "O";
	// }
	// else if (first_player == "O"|| first_player == "o" )
	// {
	// 	second_player = "X";
	// }
    cout <<game.get_player()<<"'s turn." <<"\n";
    cout <<"Enter position from 1 to 9." <<"\n";
    cout <<"Number picked: ";
	in>>position;
    // User Input Validation for Position
	while(position < 1 || position > 9)
	{
        cout << "Invalid position selected, please re-enter position between 1-9.\n";
		cout << "Number picked: ";
		in >> position;
	}
    cout << "\n";
	game.mark_board(position);
    return in;

}