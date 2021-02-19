//cpp
//include header file
#include "decision.h"
#include <string>//to make string variable
using namespace std;

//write code for the functions using if
string get_letter_grade_using_if( int num_grade)
{
    string letter_grade;//create letter grade variable,needs to be string to return invalid entry
    if (90 <= num_grade && num_grade <= 100)//90<= numerical grade<=100
    {
        letter_grade= "A";//variable is assigned an A 
    }
    else if ( 80<=num_grade && num_grade< 90)//80<=numerical grade <90
    {
        letter_grade= "B";//variable is assigned a B
    }
    else if (70<=num_grade && num_grade< 80)//70<=numerical grade <80
    {
        letter_grade="C";//variable is assigned a C
    }
    else if (60<=num_grade && num_grade< 70)//60<=numerical grade <70
    {
        letter_grade="D";//variable is assigned a D
    }
    else if (0<=num_grade && num_grade< 60)//0<=numerical grade <60
    {
        letter_grade="F";//variable is assigned a F
    }
    else // numerical grade<0 or numerical grade >100
    {
        letter_grade="Invalid entry";//variable is assigned invalid entry
    }
    return letter_grade;//returns letter_grade value
}

//write code for functions using switch
string get_letter_grade_using_switch(int num_grade)
{
    string letter_grade;//create letter grade variable,needs to be string to return invalid entry
    switch (num_grade)//make a switch function within the get letter by switch function
    {
    case 90 ... 100://using 3 periods for a range, if numbers are or btw 90 & 100
        letter_grade="A";//variable is assigned a A
        break;//break allows it to go to next case if not btw range
    case 80 ... 89://if num grade is or btw 80 & 89
        letter_grade="B";//variable is assigned a B
        break;//break allows it to go to next case if not btw range
    case 70 ... 79://if num grade is or btw 70 & 79
        letter_grade="C";//variable is assigned a C
        break;//break allows it to go to next case if not btw range
    case 60 ... 69://if num grade is or btw 60 & 69
        letter_grade="D";//variable is assigned a D
        break;//break allows it to go to next case if not btw range
    case 0 ... 59://if num grade is or btw 0 & 59
        letter_grade="F";//variable is assigned a F
        break;//break allows it to go to next case if not btw range
    default://if num grade is greater than 100 or less than 0
        letter_grade="Invalid entry";//variable is assigned invalid entry
        break;//break allows it to go to next case if not btw range
    }
    return letter_grade; //returns letter grade variable
}