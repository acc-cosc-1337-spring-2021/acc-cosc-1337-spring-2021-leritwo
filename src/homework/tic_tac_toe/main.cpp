#include"tic_tac_toe.h"
#include<iostream>
#include <limits>
using namespace std ;


int main() 
{
	
	string first_input;
	int position;
	TicTacToe game;
	cout<<"This Tic Tac Toe game allows you to choose the location of your input"<<'\n';
	cout<<"by starting in the top left corner as 1 and the bottom right as 9."<<'\n';
	cout<<"To initiate the Tic Tac Toe game please insert 'X' or 'O':"<<'\n';
	cin>>first_input;
	
	while (first_input !="X" && first_input!="o" && first_input!="O" && first_input!="x")
	{
		cout<<"To initiate the Tic Tac Toe game please insert 'X' or 'O':"<<'\n';
		cin>>first_input;
	}
	game.start_game(first_input);
	do
	{
		cout<<'\n'<<"Please inidicate where you want the position of your input: ";
		cin>>position;
		while(position<1 || position>9)
		{
			cout<<'\n'<<"Please inidicate where you want the position of your input: ";
			cin>>position;
		}
		game.mark_board(position);
		game.display_board();
	} while (game.game_over() == false);
	
	

	return 0;
}