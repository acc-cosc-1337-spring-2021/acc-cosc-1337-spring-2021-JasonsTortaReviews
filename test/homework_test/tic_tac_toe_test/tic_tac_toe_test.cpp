#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

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

TEST_CASE("Verify if TicTacToeManager works")
 {
 	TTTManager manager;
 	TicTacToe match;
 	int o, x, t;
 
 	match.start_game("X");

 	match.mark_board(1);

 	match.mark_board(2);

 	match.mark_board(5);

 	match.mark_board(4);

 	match.mark_board(9);

 	REQUIRE(match.game_over()== true);
 	manager.saved_games(match);
 	match.get_winner();

 	match.start_game("O");
 	match.mark_board(1);
 	match.mark_board(2);
 	match.mark_board(5);
 	match.mark_board(4);
 	match.mark_board(9);
 	REQUIRE(match.game_over()== true);
 	manager.saved_games(match);
 	match.get_winner();

 	match.start_game(player);
 	match.mark_board(1);
 	match.mark_board(2);
 	match.mark_board(3);
 	match.mark_board(4);
 	match.mark_board(6);
 	match.mark_board(5);
 	match.mark_board(7);
 	match.mark_board(9);
 	match.mark_board(8);
 	REQUIRE(match.game_over()== true);
 	manager.saved_games(match);
 	match.get_winner();
 	manager.get_winner_total(o,x,t);
 	REQUIRE(o == 1);
 	REQUIRE(x == 1);
 	REQUIRE(t == 1);
 }