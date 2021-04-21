#include "tic_tac_toe.h"
# include "tic_tac_toe_manager.h"
#include <string>
int main() 
{
	string first_player;
	TicTacToe game_board;
	TicTacToeManager manager;
	int o , x , tie;
	

	string continue_ ;
	
	do
	{
		
		cout<<"Player - 1 choose your Mark ( X or O ): ";cin>>first_player;cout<<endl;
		while(!(first_player == "X" || first_player == "x" || first_player == "O" || first_player == "o"))
		{
			cout<<"Please Select a Valid Mark ( X or O ): ";cin>>first_player;cout<<endl;
		}
		if(first_player == "x")
		{
			first_player = "X";
		}
		else if(first_player == "o")
		{
			first_player = "O";
		}
		game_board.start_game(first_player);
		do
		{
			cin>>game_board;
			cout<<game_board<<endl;

			
		}while(!(game_board.game_over()));
		manager.saved_games(game_board);
		manager.get_winner_total(o,x,tie);
		
		

		cout<<"-------------ScoreBoard-------------"<<endl<<manager<<endl;

	

		cout<<endl<<"If you would like a rematch simply press < Y > or < N > to QUIT!!: ";cin>>continue_;cout<<endl;
		if (continue_ == "y"||continue_ =="Y"||continue_ =="Yes"||continue_ =="yeah")
		{
			cout<<"Loading NEW GAME ...."<<endl;
		}
		else
		{
			cout<<endl<<"-------GAME OVER-------"<<endl;
		}
		


	}while(continue_ == "y"||continue_ == "Y"||continue_ == "Yes"||continue_ == "yeah");

	return 0;
}



// 
	
	



	// if(first_player == "X" || first_player == "x")
	// {
	// 	second_player = "O";
	// }
	// else if (first_player == "O"|| first_player == "o" )
	// {
	// 	second_player = "X";
	// }

	// game_board.start_game(first_player);

	// game_board.display_board();