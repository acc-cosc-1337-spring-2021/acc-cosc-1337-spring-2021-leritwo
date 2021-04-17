//h
#ifndef TicTacToeManager_H
#define TicTacToeManager_H
#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"
using namespace std;

class TicTacToeManager
{
    friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
    
    public:
        void save_game(TicTacToe b);
        void get_winner_total(int& o, int& w, int&t);

    private:
        std::vector<TicTacToe> games;
        int x_win{0};
        int o_win{0};
        int ties{0};
        void update_winner_count(string winner);

};

#endif