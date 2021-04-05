#include "tic_tac_toe.h"

int main() 
{
	string first_player  ;
	TicTacToe game_board ;
	string second_player; 
	cout<<"Player - 1 choose your Mark ( X or O ): ";cin>>first_player;cout<<endl;

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
		int player_1_position;

		cout<<"Enter your First Move (1-9): "<<game_board.get_player();cin>>player_1_position;cout<<endl;

		game_board.mark_board(player_1_position);

		game_board.display_board();

		cout<<"To Place Again Press {Y} to Quit press {Q}";cin>>continue_;cout<<endl;
		if(game_board.game_over() == true )
		{
			cout<<"Game Over!"<<endl;
			break;
		}
		

	}while(continue_ == "y"||continue_ == "Y");


	return 0;
}