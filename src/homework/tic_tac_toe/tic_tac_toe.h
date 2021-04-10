//h
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class TicTacToe
{   
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        const string get_player();
        const void display_board();
        string get_winner();
    
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        string player;
        vector<string> pegs{vector<string>(9," ")};
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        string winner;
};