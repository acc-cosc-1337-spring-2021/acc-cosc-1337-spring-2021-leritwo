#include"tic_tac_toe.h"
#include<iostream>
using namespace std ;


int main() 
{
	
	string first_input;
	int position;
	char play_again;
	TicTacToe game;
	cout<<"This Tic Tac Toe game allows you to choose the location of your input"<<'\n';
	cout<<"by starting in the top left corner as 1 and the bottom right as 9."<<'\n';
	do
	{
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
		if(game.get_winner()=="X" || game.get_winner()=="O")
		{
			cout<<"\n"<<"The winner is: "<<game.get_winner();
		}
		else
		{
			cout<<"\n"<<"The game ended as a tie.";
		}
		cout<<"\n"<<"Would you like to play again? If yes, enter y. If no, press any key: ";
		cin>>play_again;
	} while (play_again=='y' || play_again=='Y');
	
	return 0;
}