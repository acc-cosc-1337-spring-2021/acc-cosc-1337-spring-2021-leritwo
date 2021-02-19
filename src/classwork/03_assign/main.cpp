//Write the include statement for decisions.h here
#include "decision.h"
#include <string>
#include <iostream>
//Write namespace using statements for cout and cin
using namespace std;

int main() 
{
	int num_grade;//creating a variable for the input grade
	string letter_grade;//creating a variable for return value
	cout<<"Enter numerical grade to know what the equivalent letter grade is:";//getting input from user of # grade
	cin>>num_grade;//assign input num grade variable
	letter_grade=get_letter_grade_using_if(num_grade);//assign return value to letter grade variable
	cout<<"The equivalent letter grade is(using if statements):"<<letter_grade<<"\n";//display letter grade
	letter_grade=get_letter_grade_using_switch(num_grade);//assign return value to letter grade variable in switch function
	cout<<"The equivalent letter grade is(using switch):"<<letter_grade<<"\n";//display letter grade from switch function
	return 0;
}

