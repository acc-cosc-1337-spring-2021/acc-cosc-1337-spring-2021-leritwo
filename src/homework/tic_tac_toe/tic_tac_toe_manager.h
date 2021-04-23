//h
#ifndef TicTacToeManager_H
#define TicTacToeManager_H
#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include "tic_tac_toe.h"
using namespace std;

class TicTacToeManager
{
    friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
    
    public:
        //std::unique_ptr<TicTacToe&> save_game(std::unique_ptr<TicTacToe&>);
        void save_game(std::unique_ptr<TicTacToe>& b);
        void get_winner_total(int& o, int& w, int&t);

    private:
        vector<unique_ptr<TicTacToe>>games;
        int x_win{0};
        int o_win{0};
        int ties{0};
        void update_winner_count(string winner);

};

#endif