#include"tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using namespace std ;


int main() 
{
	string play_again;
	int o;
	int x;
	int t;
	TicTacToe game;
	TicTacToeManager manager;
	cout<<"This Tic Tac Toe game allows you to choose the location of your input"<<'\n';
	cout<<"by starting in the top left corner as 1 and the bottom right as 9."<<'\n';
	do
	{
		cin>>game;
		if(game.get_winner()=="X" || game.get_winner()=="O")
		{
			cout<<"\n"<<"The winner is: "<<game.get_winner()<<"\n";
		}
		else
		{
			cout<<game.get_winner();
			cout<<"\n"<<"The game ended as a tie."<<"\n";
		}
		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"X Wins: "<<x<<" O Wins: "<<o<<" Ties: "<<t<<"\n";
		cout<<"\n"<<"Would you like to play again? If yes, enter y. If no, press any key: ";
		cin>>play_again;	
	} while (play_again=="y" || play_again=="Y");
	cout<<manager;
	return 0;
}