//cpp
#include "tic_tac_toe_manager.h"



void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    string winner;
    winner = b.get_winner();
    update_winner_count(winner);   
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    out<<"The previous games played will display next."<<"\n";
    for (size_t i=0; i < manager.games.size(); i++)
    {
        out << "Game: "<<i+1<<"\n"<<manager.games[i] <<"\n";
    }
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o= o_win;
    x=x_win;
    t=ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner=="X")
    {
        x_win++;
    }
    else if(winner=="O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}