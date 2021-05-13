#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// TEST_CASE("Test Game Properly Functions 1.0"){
// 	TicTacToe test_game ;

// 	test_game.mark_board(1);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(2);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(3);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(5);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(4);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(6);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(8);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(7);
//   REQUIRE(test_game.game_over() == false);

//   test_game.mark_board(9);
//   REQUIRE(test_game.game_over() == true);

// 	REQUIRE(test_game.get_winner() == "C");

// }

// TEST_CASE("Verify TicTacToe Works 2.0")
// {
// 	TicTacToe test_game;
// 	test_game.start_game("X");

// 	REQUIRE(test_game.get_player()== "X");

// 	test_game.start_game("O");

// 	REQUIRE(test_game.get_player()== "O");


// }
// TEST_CASE("VERIFY WIN BY FIRST COLUMN")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(1);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(2);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(4);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(5);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(7);

// 	REQUIRE(test_game.game_over() == true);


// }
// TEST_CASE("VERIFY WIN BY SECOND COLUMN")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(2);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(5);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(7);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(8);

// 	REQUIRE(test_game.game_over() == true);


// }
// TEST_CASE("VERIFY WIN BY THIRD COLUMN")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(4);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(6);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(8);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(9);

// 	REQUIRE(test_game.game_over() == true);


// }

// TEST_CASE("VERIFY WIN BY FIRTS ROW")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(1);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(4);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(2);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(8);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over() == true);


// }
// TEST_CASE("VERIFY WIN BY SECOND ROW")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(4);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(5);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(8);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(6);

// 	REQUIRE(test_game.game_over() == true);


// }
// TEST_CASE("VERIFY WIN BY THIRD ROW")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(7);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(4);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(8);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over() == false);

// 	test_game.mark_board(9);

// 	REQUIRE(test_game.game_over() == true);

// }

// TEST_CASE("VERIFY WIN DIAGONALLY TOP LEFT")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(1);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(5);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(7);

// 	REQUIRE(test_game.game_over()==false);
	
// 	test_game.mark_board(9);

// 	REQUIRE(test_game.game_over()== true);

// }

// TEST_CASE("VERIFY WIN DIAGONALLY TOP RIGHT")
// {
// 	TicTacToe test_game;

// 	test_game.start_game("X");

// 	test_game.mark_board(3);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(2);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(5);

// 	REQUIRE(test_game.game_over()==false);

// 	test_game.mark_board(6);

// 	REQUIRE(test_game.game_over()==false);
	
// 	test_game.mark_board(7);

// 	REQUIRE(test_game.game_over()== true);

// }

// TEST_CASE("Verify if TicTacToeManager works")
//  {
//  	TicTacToe Game;
// 	TicTacToeManager manager;
// 	int x = 0;
// 	int o = 0;
// 	int t = 0;

// 	Game.start_game("X");

// 	Game.mark_board(1);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(4);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(2);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(5);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(3);
// 	REQUIRE(Game.game_over()== true);

// 	REQUIRE(Game.get_winner() == "X");

// 	manager.saved_games(Game);

// 	Game.start_game("O");

// 	Game.mark_board(1);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(4);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(2);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(5);
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(3);
// 	REQUIRE(Game.game_over()== true);

// 	REQUIRE(Game.get_winner() == "O");

// 	manager.saved_games(Game);

// 	Game.start_game("X");

// 	Game.mark_board(3); // X
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(1); // O
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(4); // X
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(2); // O
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(5); // X
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(6); // O
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(8); // X
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(7); // O
// 	REQUIRE(Game.game_over() == false);
// 	Game.mark_board(9); // X
// 	REQUIRE(Game.game_over() == true);

// 	REQUIRE(Game.get_winner() == "C");

// 	manager.saved_games(Game);

// 	manager.get_winner_total(o,x,t);

// 	REQUIRE(o == 1);
// 	REQUIRE(x == 1);
// 	REQUIRE(t == 1);
//  }

TEST_CASE("This Will verify that connect4 and Classic_TTT works! 'X'  ")
{
	std::unique_ptr<TicTacToe> board_test = std::make_unique<Connect4>() ;

	board_test -> start_game("X");

	board_test -> mark_board(1);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(2);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(5);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(6);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(9);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(10);

	REQUIRE(board_test ->game_over()==false);

	board_test ->mark_board(13);

	REQUIRE(board_test ->game_over()==true);
}

//ALl TEST_CASes are passing