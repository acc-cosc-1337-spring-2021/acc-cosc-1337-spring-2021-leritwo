//cpp
#include "tic_tac_toe_manager.h"
#include<memory>


void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
    string winner;
    winner = b->get_winner();
    update_winner_count(winner);
    games.push_back(std::move(b));  
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    out<<"The previous games played will display next."<<"\n";
    for (size_t i=0; i < manager.games.size(); i++)
    {
        out << "Game: "<<i+1<<"\n"<< *manager.games[i] <<"\n";

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
TicTacToeManager::TicTacToeManager(TicTacToeData& data)
{
    vector<unique_ptr<TicTacToe>> games(data.get_games());
}
TicTacToeManager::~TicTacToeManager()
{
    TicTacToeData::save_games(games);
}