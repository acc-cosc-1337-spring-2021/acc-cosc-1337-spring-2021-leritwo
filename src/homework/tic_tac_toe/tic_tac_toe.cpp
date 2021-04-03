//cpp
#include"tic_tac_toe.h"
#include<iostream>
using namespace std ;
using std::vector;

bool TicTacToe::game_over()
{
    return check_board_full();
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


const void TicTacToe::display_board()
{
    for (size_t i=0; i < pegs.size(); i++)
    {
        if (i==3 || i==6)
        {       
            cout<<'\n';
        } 

        std::cout << pegs.at(i) << " ";
    }
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