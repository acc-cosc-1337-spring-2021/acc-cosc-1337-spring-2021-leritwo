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
    outputFile.open("games_data.txt");
    for (size_t i = 0; i < games.size(); i++)
    {
        outputFile<<*games[i];
    }
    outputFile<<get_winner()<<"\n";  
}
vector<std::unique_ptr<TicTacToe>> get_games()
{
    unique_ptr<TicTacToe> boards;
    
    string line;
    string winner;
    vector<string> pegs;
    unique_ptr<TicTacToe> board;
    ifstream inputFile;
    inputFile.open("games_data.txt");
    getline(inputFile, line, '\n');
    while(!inputFile.fail())
    {
        
        for (size_t i = 0; i <line.size()-1; i++)
        {
            string s (1,line[i]);
            pegs.push_back(s);
            
        }
        winner=line.back();
        getline(inputFile, line, '\n');
        if(line.size()==9)
        {
            board=make_unique<TicTacToe3>(pegs, winner);
        }
        else if(line.size()==16)
        {
            board=make_unique<TicTacToe4>(pegs, winner);
        }
        boards.push_back(std::move(board));
    }
    inputFile.close();
    return boards;


}