#include "tic_tac_toe.h"

int main() 
{
	string first_player;
	TicTacToe game_board ;
	int player_1_position;
	cout<<"Player -1 choose your Mark ( X or O ): ";cin>>first_player;cout<<endl;

	game_board.start_game(first_player);

	game_board.display_board();

	
	
	cout<<endl<<endl<<"Player - 1 <"<<first_player<<">"<<"\t Player - 2 <?>"<<endl;
	string continue_;
	do
	{
		

		cout<<"Enter your First Move (1-9): ";cin>>player_1_position;cout<<endl;

		game_board.mark_board(player_1_position);

		game_board.display_board();

		cout<<"To Place Again Press {Y} to Quit press {Q}";cin>>continue_;cout<<endl;
		if(game_board.game_over() == true )
		{
			cout<<"Game Over!"<<endl;
		}
		

	}while(continue_ == "y"||continue_ == "Y");


	return 0;
}