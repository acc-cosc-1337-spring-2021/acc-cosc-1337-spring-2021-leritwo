#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 4, 8, 12 
1, 5, 9, 13 
2, 6, 10, 14 
3, 7, 11, 15
else
false
*/
bool TicTacToe4::check_column_win()
{
    if ((pegs.at(0)=="X" && pegs.at(4)=="X" && pegs.at(8)== "X" && pegs.at(12)== "X") || (pegs.at(0)=="O" && pegs.at(4)=="O" && pegs.at(8)== "O" && pegs.at(12)== "O"))
    {
        return true;
    }
    if((pegs.at(1)=="X" && pegs.at(5)=="X" && pegs.at(9)== "X" && pegs.at(13)== "X") || (pegs.at(1)=="O" && pegs.at(5)=="O" && pegs.at(9)== "O" && pegs.at(13)== "O"))
    {
        return true;
    }
    if((pegs.at(2)=="X" && pegs.at(6)=="X" && pegs.at(10)== "X" && pegs.at(14)== "X") || (pegs.at(2)=="O" && pegs.at(6)=="O" && pegs.at(10)== "O" && pegs.at(14)== "O"))
    {
        return true;
    }
    if((pegs.at(3)=="X" && pegs.at(7)=="X" && pegs.at(11)== "X" && pegs.at(15)== "X") || (pegs.at(3)=="O" && pegs.at(7)=="O" && pegs.at(11)== "O" && pegs.at(15)== "O"))
    {
        return true;
    }
    
    return false;
}
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool TicTacToe4::check_row_win()
{
    if ((pegs.at(0)=="X" && pegs.at(1)=="X" && pegs.at(2)== "X" && pegs.at(3)== "X") || (pegs.at(0)=="O" && pegs.at(1)=="O" && pegs.at(2)== "O" && pegs.at(3)== "O"))
    {
        return true;
    }
    if((pegs.at(4)=="X" && pegs.at(5)=="X" && pegs.at(6)== "X" && pegs.at(7)== "X") || (pegs.at(4)=="O" && pegs.at(5)=="O" && pegs.at(6)== "O" && pegs.at(7)== "O"))
    {
        return true;
    }
    if((pegs.at(8)=="X" && pegs.at(9)=="X" && pegs.at(10)== "X" && pegs.at(11)== "X") || (pegs.at(8)=="O" && pegs.at(9)=="O" && pegs.at(10)== "O" && pegs.at(11)== "O"))
    {
        return true;
    }
    if((pegs.at(12)=="X" && pegs.at(13)=="X" && pegs.at(14)== "X" && pegs.at(15)== "X") || (pegs.at(12)=="O" && pegs.at(13)=="O" && pegs.at(14)== "O" && pegs.at(15)== "O"))
    {
        return true;
    }
    
    return false;
}
/*
class function check_diagonal_win
Win diagonally
0, 5,  10, 15
3, 6, 9, 12
*/


bool TicTacToe4::check_diagonal_win()
{
    if((pegs.at(0)=="X" && pegs.at(5)=="X" && pegs.at(10)== "X" && pegs.at(15)== "X") || (pegs.at(0)=="O" && pegs.at(5)=="O" && pegs.at(10)== "O" && pegs.at(15)== "O"))
    {
        return true;
    }
    if((pegs.at(3)=="X" && pegs.at(6)=="X" && pegs.at(9)== "X" && pegs.at(12)== "X") || (pegs.at(3)=="O" && pegs.at(6)=="O" && pegs.at(9)== "O" && pegs.at(12)== "O"))
    {
        return true;
    }
    
    return false;
}






