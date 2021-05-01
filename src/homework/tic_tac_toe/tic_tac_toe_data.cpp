//cpp
#include"tic_tac_toe_data.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<vector>
#include<fstream>
#include<string>
#include<memory>

void TicTacToeData::save_games(const vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream outputFile;
    outputFile.open(file_name);
    if(outputFile.is_open())
    {
        for(auto&game : games)//for each game in games
        {
            for(auto&peg: game->get_pegs())//each game has vector of pegs
            {
                outputFile<<peg;//output each game in pegs letter
            }
            outputFile<<game->get_winner();
            outputFile<<"\n";
        }
    }
    outputFile.close();
 
}
vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> boards;
    
    ifstream inputFile;
    inputFile.open(file_name);
    string line;
    if(inputFile.is_open())
    {
        while(getline(inputFile, line))//while reading thru each line in the file
        {
            vector<string> pegs;
            for (size_t i = 0; i <(line.size()-1); i++)
            {
                string s (1,line[i]);
                pegs.push_back(s);
            }
            string winner{line.back()};
            unique_ptr<TicTacToe> board;
            if(pegs.size()==9)
            {
                board=make_unique<TicTacToe3>(pegs, winner);
            }
            else if(pegs.size()==16)
            {
                board=make_unique<TicTacToe4>(pegs, winner);
            }
            boards.push_back(std::move(board));  
        }
        inputFile.close();
    }
    return boards;
}