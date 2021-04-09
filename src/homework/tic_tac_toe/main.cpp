#include "tic_tac_toe.h"

int main() 
{
	string first_player;
	TicTacToe game_board;
	string second_player; 

	cout<<"Player - 1 choose your Mark ( X or O ): ";cin>>first_player;cout<<endl;
	
	if (first_player=="x")
	{
		first_player = "X";
	}
	else if (first_player == "o")
	{
		first_player = "O";
	}

	while(first_player != "X" && first_player!=  "O")
	{
		cout<<"Mark can only be X or O !"<<endl;
		cout<<endl<<"Now Try Again Choose Your Mark: ";cin>>first_player;cout<<endl;
	}

	if(first_player == "X" || first_player == "x")
	{
		second_player = "O";
	}
	else if (first_player == "O"|| first_player == "o" )
	{
		second_player = "X";
	}

	game_board.start_game(first_player);

	game_board.display_board();

	
	
	cout<<endl<<endl<<"Player - 1 < "<<first_player<<" >"<<"\t Player - 2 < "<<second_player<<" >"<<endl;
	string continue_;
	do
	{
		game_board.display_board();
		do
		{
			
			int player_position;

			do
			{
				cout<<endl<<endl<<"Enter your Move (1-9): Player --> "<<game_board.get_player()<<"   ";cin>>player_position;cout<<endl;

			}while(!(player_position<=9 && player_position>= 1));
			cout<<"Updating Board..."<<endl;
			game_board.mark_board(player_position);
			

			game_board.display_board();

		}while(!(game_board.game_over()));
	

		cout<<endl<<"If you would like a rematch simply press < Y > or < N > to QUIT!!: ";cin>>continue_;cout<<endl;

		cout<<"Loading NEW GAME ...."<<endl;


	}while(continue_ == "y"||"Y"||"Yes");

	return 0;
}