//cpp
#include"tic_tac_toe.h"
#include<iostream>
using namespace std ;
using std::vector;

bool TicTacToe::game_over()
{
    //return check_board_full();
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    if(check_board_full())
    {
        winner="C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player)
{
    first_player[0]=toupper(first_player[0]);
    player=first_player;
    clear_board(); 
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1]=player;
    set_next_player();
}

const string TicTacToe::get_player()
{
    return player;
}

void TicTacToe::set_next_player()
{
    if (player=="X" || player=="x")
    {
        player="O";
    }
    else
    {
       player="X";  
    }    
}

bool TicTacToe::check_board_full()
{
    
    for (size_t i=0; i < pegs.size(); i++)
    {
        if (pegs.at(i)== " ")
        {
            return false;
        }  
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (size_t i=0; i < pegs.size(); i++)
    {
        pegs.at(i)= " ";
    }
}


bool TicTacToe::check_column_win()
{

    if ((pegs.at(0)=="X" && pegs.at(3)=="X" && pegs.at(6)== "X") || (pegs.at(0)=="O" && pegs.at(3)=="O" && pegs.at(6)== "O" ))
    {
        return true;
    }
    if((pegs.at(1)=="X" && pegs.at(4)=="X" && pegs.at(7)== "X") || (pegs.at(1)=="O" && pegs.at(4)=="O" && pegs.at(7)== "O" ))
    {
        return true;
    }
    if((pegs.at(2)=="X" && pegs.at(5)=="X" && pegs.at(8)== "X") || (pegs.at(2)=="O" && pegs.at(5)=="O" && pegs.at(8)== "O" ))
    {
        return true;
    }
    
    return false;

}

bool TicTacToe::check_row_win()
{

    if ((pegs.at(0)=="X" && pegs.at(1)=="X" && pegs.at(2)== "X") || (pegs.at(0)=="O" && pegs.at(1)=="O" && pegs.at(2)== "O" ))
    {
        return true;
    }
    if((pegs.at(3)=="X" && pegs.at(4)=="X" && pegs.at(5)== "X") || (pegs.at(3)=="O" && pegs.at(4)=="O" && pegs.at(5)== "O" ))
    {
        return true;
    }
    if((pegs.at(6)=="X" && pegs.at(7)=="X" && pegs.at(8)== "X") || (pegs.at(6)=="O" && pegs.at(7)=="O" && pegs.at(8)== "O" ))
    {
        return true;
    }
    
    return false;

}

bool TicTacToe::check_diagonal_win()
{

    if ((pegs.at(0)=="X" && pegs.at(4)=="X" && pegs.at(8)== "X") || (pegs.at(0)=="O" && pegs.at(4)=="O" && pegs.at(8)== "O" ))
    {
        return true;
    }
    if((pegs.at(2)=="X" && pegs.at(4)=="X" && pegs.at(6)== "X") || (pegs.at(2)=="O" && pegs.at(4)=="O" && pegs.at(6)== "O" ))
    {
        return true;
    }
    
    return false;

}
        
void TicTacToe::set_winner()
{
    if (player=="X")
    {
        winner="O";
    }
    else
    {
       winner="X";  
    }    
}

string TicTacToe::get_winner()
{
    return winner;
}
ostream& operator<<(ostream& out, const TicTacToe& game)
{

    for (size_t i=0; i < game.pegs.size(); i++)
    {
         if (i==3 || i==6)
        {       
            out<<'\n';
        } 
        
        out << game.pegs.at(i) << " ";
  }
    return out;
}
istream& operator>>(istream& in, TicTacToe& game)
{
    string first_input;
    int position;
    cout<<"To initiate the Tic Tac Toe game please insert 'X' or 'O':"<<'\n';
    in>>first_input;
    while (first_input !="X" && first_input!="o" && first_input!="O" && first_input!="x")
    {
        cout<<"To initiate the Tic Tac Toe game please insert 'X' or 'O':"<<'\n';
        in>>first_input;
    }
    game.start_game(first_input);
    do
    {
        cout<<'\n'<<"Please inidicate where you want the position of your input: ";
        in>>position;
        while(position<1 || position>9)
        {
            cout<<'\n'<<"Please inidicate where you want the position of your input: ";
            in>>position;
        }
        game.mark_board(position);
        cout<<game;
    }while (game.game_over()==false );
    return in;
}