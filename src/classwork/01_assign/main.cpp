//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using namespace std;

int main() 
{
	
	int num;//creat in variable that equals input from user
	int result_variable;//create result variable
	cout<< "Please insert a number:";//message to user to insert number
	cin>> num;//convert the number inputted to the variable num
	//multiply_numbers( num);//use num as the parameter in the function
	result_variable=multiply_numbers(num);
	cout<< num<<" multiplied by 5 "<<"equals\n";//display the multiplication of the num&num2
	cout<<result_variable<<"\n";//dislay result of the multiplication
	int num1=4;//create int variable equal to 4
	result_variable=multiply_numbers(num1);
	cout<< num1<<" multiplied by 5 "<<"equals\n";//display the multiplication of the num1 & num2
	cout<<result_variable;//dislay result of the multiplication
	return 0;
}


