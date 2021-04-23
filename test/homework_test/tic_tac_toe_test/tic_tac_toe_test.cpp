#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<string>
#include<memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the creation of an instance of TicTacToe game") 
{
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	//TicTacToe game;
	game->start_game("X");
	REQUIRE(game->get_player() == "X" );
}

TEST_CASE("Verify the board positions") 
{
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	//TicTacToe game;
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	
}

TEST_CASE("Verify the creation of an instance of TicTacToe game with first player as X") 
{
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	//TicTacToe game;
	game->start_game("X");
	REQUIRE(game->get_player() == "X" );
}
TEST_CASE("Verify the creation of an instance of TicTacToe game with first player as O") 
{
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	//TicTacToe game;
	game->start_game("O");
	REQUIRE(game->get_player() == "O" );
}

TEST_CASE("Verify first row win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	game->mark_board(4);//o
	game->mark_board(2);//x
	game->mark_board(5);//o
	game->mark_board(3);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify  second row win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	game->mark_board(2);//o
	game->mark_board(4);//x
	game->mark_board(3);//o
	game->mark_board(5);//x
	game->mark_board(7);//o
	game->mark_board(6);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify third row win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//x
	game->mark_board(1);//o
	game->mark_board(8);//x
	game->mark_board(3);//o
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify first column win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	game->mark_board(2);//o
	game->mark_board(4);//x
	game->mark_board(3);//o
	game->mark_board(7);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify second column win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);//X
	game->mark_board(1);//O
	game->mark_board(5);//X
	game->mark_board(3);//O
	game->mark_board(8);//X
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify third column win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);//X
	game->mark_board(1);//O
	game->mark_board(6);//X
	game->mark_board(2);//O
	game->mark_board(9);//X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify top left diag win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//X
	game->mark_board(8);//O
	game->mark_board(5);//X
	game->mark_board(3);//O
	game->mark_board(9);//X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}
TEST_CASE("Verify bottom left win for X ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);//X
	game->mark_board(2);//O
	game->mark_board(5);//X
	game->mark_board(4);//O
	game->mark_board(7);//X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	
}

TEST_CASE("Verify manager get winner total function, 2 x wins, 0 o wins, 1 ties ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int o;
	int x;
	int t;
	game->start_game("X");
	game->mark_board(3);//X
	game->mark_board(2);//O
	game->mark_board(5);//X
	game->mark_board(4);//O
	game->mark_board(7);//X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	manager.save_game(game);
	game->start_game("X");
	game->mark_board(3);//X
	game->mark_board(2);//O
	game->mark_board(5);//X
	game->mark_board(4);//O
	game->mark_board(7);//X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	manager.save_game(game);
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(5);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(8);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manager.save_game(game);
	manager.get_winner_total(o, x, t);
	REQUIRE(x==2);
	REQUIRE(o==0);
	REQUIRE(t==1);

}
TEST_CASE("Verify manager get winner total function, 0 x wins, 2 o wins, 1 ties ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int o;
	int x;
	int t;
	game->start_game("O");
	game->mark_board(3);//o
	game->mark_board(2);//x
	game->mark_board(5);//o
	game->mark_board(4);//x
	game->mark_board(7);//o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	manager.save_game(game);
	game->start_game("O");
	game->mark_board(3);//o
	game->mark_board(2);//x
	game->mark_board(5);//o
	game->mark_board(4);//x
	game->mark_board(7);//o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	manager.save_game(game);
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(5);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(8);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manager.save_game(game);
	manager.get_winner_total(o, x, t);
	REQUIRE(x==0);
	REQUIRE(o==2);
	REQUIRE(t==1);

}

TEST_CASE("Verify manager get winner total function, 0 x wins, 0 o wins, 2 ties ") 
{
	//TicTacToe game;
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int o;
	int x;
	int t;
	game->start_game("X");
	game->mark_board(2);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//o
	game->mark_board(3);//x
	game->mark_board(5);//o
	game->mark_board(4);//x
	game->mark_board(6);//o
	game->mark_board(8);//x
	game->mark_board(7);//o
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manager.save_game(game);//no * bc unique ptr different from | ptr
	game->start_game("O");
	game->mark_board(2);//o
	game->mark_board(1);//x
	game->mark_board(3);//o
	game->mark_board(5);//x
	game->mark_board(4);//o
	game->mark_board(6);//x
	game->mark_board(8);//o
	game->mark_board(7);//x
	game->mark_board(9);//o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manager.save_game(game);
	manager.get_winner_total(o, x, t);
	REQUIRE(x==0);
	REQUIRE(o==0);
	REQUIRE(t==2);

}



