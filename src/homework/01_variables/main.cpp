//write include statements
#include "variables.h"

//write namespace using statement for cout
#include <iostream>
using namespace std;
//write header file to use setprecision
#include <iomanip>

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;//create variable for meal cost
	double tip_rate;//create variable for wanted tip rate
	double tax_amount;//create variable for tax cost
	double total;//create variable for total cost
	cout<<"Enter the meal cost:";//get user to input meal cost
	cin>>meal_amount;//assign the input to the meal cost variable
	tax_amount=get_sales_tax_amount(meal_amount);//assign the return value from function to variable
	cout<<"Enter desired tip percentage, in percent form:";//get user to input desired tip rate
	cin>>tip_rate;//assign imput to the tip rate variable
	tip_rate=get_tip_amount(meal_amount,tip_rate);//assign the return value from function to variable
	total=tip_rate + tax_amount + meal_amount;//get restaurant total
	cout<<"Meal Amount:$"<<meal_amount<<"\n";//display meal total
	cout<<"Sales Tax:$"<<fixed<<showpoint<<setprecision(2)<<tax_amount<<"\n";//display tax total
	cout<<"Tip Amount:$"<<fixed<<showpoint<<setprecision(2)<<tip_rate<<"\n";//display tip total
	cout<<"Total:$"<<fixed<<showpoint<<setprecision(2)<<total<<"\n";//display restaurant total
	
	return 0;
}
