//cpp
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::endl; using std::vector;
using std::ostream; using std::istream;




ostream& operator<<(ostream& out, const TicTacToe& game)
{
	
	if(game.pegs.size()==9)
	{

		out<<endl;

		out<<"|~~~~Tic-Tac-Toe~~~~|"<<endl<<endl;
		
		out<<"\t|   |"<<endl;

		out<<"      "<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<endl;

		out<<"  ------+-"<<"--+------"<<endl;

		out<<"      "<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<endl;

		out<<"  ------+-"<<"--+------"<<endl;

		out<<"      "<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<endl;

		out<<"\t|   |"<<endl;

		out<<"|~~~~2 Player Game~~~~|"<<endl;

		
		return out;

	}
	else if ( game.pegs.size()==16)
	{
		out<<endl;

		out<<"   |~~~~~~CONNECT 4~~~~~~|"<<endl<<endl;
		
		out<<"  |`````|`````|`````|`````|"<<endl;

		out<<"  |  "<<game.pegs[0]<<"  |  "<<game.pegs[1]<<"  |  "<<game.pegs[2]<<"  |  "<<game.pegs[3]<<"  |"<<endl;

		out<<"  |-----+-"<<"----+-----+-----|"<<endl;

		out<<"  |  "<<game.pegs[4]<<"  |  "<<game.pegs[5]<<"  |  "<<game.pegs[6]<<"  |  "<<game.pegs[7]<<"  |"<<endl;

		out<<"  |-----+-"<<"----+-----+-----|"<<endl;

		out<<"  |  "<<game.pegs[8]<<"  |  "<<game.pegs[9]<<"  |  "<<game.pegs[10]<<"  |  "<<game.pegs[11]<<"  |"<<endl;

		out<<"  |-----+-"<<"----+-----+-----|"<<endl;

		out<<"  |  "<<game.pegs[12]<<"  |  "<<game.pegs[13]<<"  |  "<<game.pegs[14]<<"  |  "<<game.pegs[15]<<"  |"<<endl;

		out<<"  |_____|_____|_____|_____|"<<endl;

		out<<endl<<"   |~~~~2 Player Game~~~~| "<<endl;
		
		return out;

	}

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
// 	if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
//    {
//      return true;
//    }
//    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
//    {
//      return true;
//    }
//    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
//    {
//      return true;
//    }
  
//    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
//    {
//      return true;
//    }
//    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
//    {
//      return true;
//    }
//    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
//    {
//      return true;
//    }
   
   
  return false;
   

	
}

bool TicTacToe::check_column_win()
{
	
	// if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	// {
	// 	return true;
	// }
	// else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	// {
	// 	return true;
	// }
	// else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	// {
	// 	return true;
	// }
	
	// if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	// {
	// 	return true;
	// }
	// else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	// {
	// 	return true;
	// }
	// else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	// {
	// 	return true;
	// }
	return false;
	
}
bool TicTacToe::check_diagonal_win()
{
// 	 if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
//    {
//      return true;
//    }
//    else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
//    {
//      return true;
//    }
  
//    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
//    {
//      return true;
//    }
//    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
//    {
//      return true;
//    }
   
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
	
	if(game.pegs.size()==9)
	{
		cout<<endl<<"Enter your Move (1-9): Player --> "<<game.get_player()<<"   ";in>>position;cout<<endl;
		
		
		// User Input Validation for Position
		while(position < 1 || position > 9)
		{
			cout << "Invalid position selected, please re-enter position between 1-9.\n";
			cout << "Number picked: ";
			in >> position;
		}
		cout <<endl;
		game.mark_board(position);
	}
	else if (game.pegs.size()==16)
	{
		cout<<endl<<"Enter your MOVE (1-9): Player--> "<<game.get_player()<<"   ";in>>position;cout<<endl;

		while(position < 1 || position > 16)
		{
			cout<<"Please Make Sure to ENTER A NUMBER FROM (1-16) : ";in>>position;cout<<endl;
		}
		cout<<endl;
		game.mark_board(position);

	}
    return in;

}