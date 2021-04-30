//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include"tic_tac_toe.h"
#include<memory>
class TicTacToeData: public TicTacToe
{
    public:
        vector<std::unique_ptr<TicTacToe>> get_games();
        void save_games(const vector<std::unique_ptr<TicTacToe>>& games);


    private:
        

};

#endif