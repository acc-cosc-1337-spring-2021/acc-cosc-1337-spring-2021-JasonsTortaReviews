#include "tic_tac_toe.h"
# include "tic_tac_toe_manager.h"
#include <string>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

using std::make_unique; using std::unique_ptr;
int main() 
{
	string first_player;
	unique_ptr<TicTacToe> game_board;
	AllGameData game_data;
	TicTacToeManager manager = TicTacToeManager(game_data);
	int o , x , tie;


	int option; 

	string continue_ ;
	
	
	do
	{
		cout<<endl<<endl<<"CHOOSE THE GAME MODE YOU WOULD LIKE TO PLAY CLASSIC TIC-TAC-TOE(1) or CONNECT 4(2): ";cin>>option;cout<<endl;

		while(option <1 || option>2)
		{
			cout<<"This option is not listed please TRY AGAIN : ";cin>>option;
		}

		if(option == 1)
		{
			game_board = std::make_unique<Classic_TTT>();
		}
		else if (option == 2)
		{
			game_board = std::make_unique<Connect4>();
		}

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
		game_board -> start_game(first_player);
		
		while(!(game_board-> game_over()))
		{
			cin>>*game_board;
			cout<<*game_board<<endl;
			
		}

		manager.saved_games(game_board);
		manager.get_winner_total(o,x,tie);
		cout<<manager<<endl;
		
		cout<<endl<<"If you would like a rematch simply press < Y > or < N > to QUIT!!: ";cin>>continue_;cout<<endl;
		if (continue_ == "y"||continue_ =="Y"||continue_ =="Yes"||continue_ =="yeah")
		{
			cout<<"Loading NEW GAME ...."<<endl;
		}
		else
		{
			cout<<endl<<"-------GAME OVER-------"<<endl;
		}
		

	} while (continue_ == "y"||continue_ == "Y"||continue_ == "Yes"||continue_ == "yeah");
	
		


	

	return 0;
}


