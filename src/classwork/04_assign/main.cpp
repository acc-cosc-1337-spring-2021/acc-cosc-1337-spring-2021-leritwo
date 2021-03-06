//write includes statements
#include "loops.h"
#include <iostream>
#include <cctype>

//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;//create variable
	char answer;//create string variable 
	do
	{
		cout<<"Enter a number between 1 and 10:";//ask user to input a # btw 1&10
		cin>>num;//save input to variable
		while(num<1 || num>10)//if number not btw 1&10
		{
			cout<<"Enter a number between 1 and 10:";//ask user again
			cin>>num;
		}
		cout<<"The factorial of "<<num<<" is: "<<factorial_numbers(num)<<'\n';//display factorial value
		cout<<"Would you like to find the factorial to another number between 1 and 10, y for yes or anything else for no?"<<'\n';//ask user if wants to redo
		cin>>answer;//save input to string variable
		answer=tolower(answer);//make input to lowercase
	} while(answer=='y');

	return 0;
}