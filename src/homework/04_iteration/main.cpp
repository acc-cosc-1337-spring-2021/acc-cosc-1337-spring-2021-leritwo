//write include statements
#include "dna.h"
#include <cstring>
#include<string>
#include<iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string input;//create new string variable to get users decision for gc content or complement
	char again;//create new char variable to get users decision for doing program again
	string dna;//create new string variable to get users dna string
	do
	{
		cout<<"Please enter 1 to get GC Content or enter 2 to get DNA Complement:"<<'\n';//get user to insert 1 & 2
		cin>>input;//insert user input to variable input
		while (!(input=="1"|| input=="2"))//while loop for anything other than 1 or 2
		{
			cout<<"Incorrect entry was entered. Please enter 1 to get CG Content or enter 2 to get DNA Complement:"<<'\n' ;
			cin>>input;//get user to try again and insert 1 & 2
		}
		if(input=="1")
		{	
			do//do while loop till dna chars are a,t,g,c
			{
				cout<<"Please enter a DNA strain (only letter combo of 'A', 'T', 'G','C' allowed:"<<'\n';
				cin>>dna;
			} while (is_input_valid(dna)==false);
			cout<<"The GC Content percentage of the DNA strain you provided is:"<<get_gc_content(dna)<<'\n';//called gc function
		}
		else if(input=="2")
		{
			do
			{//do while loop till dna chars are a,t,g,c
				cout<<"Please enter a DNA strain (only letter combo of 'A', 'T', 'G','C' allowed:"<<'\n';
				cin>>dna;
			} while (is_input_valid(dna)==false);
			cout<<"The DNA Complement of the DNA strain you provided is:"<<get_dna_complement(dna)<<'\n';//called complement function
		}
		cout<<"Would you like to find the GC Content or DNA Complement of another DNA strain? If so, enter y. If not, enter any other key"<<'\n';
		cin>>again;//ask user if they would like to run program again, insert input to variable again
	} while (again=='y' || again=='Y');
	
	return 0;
}