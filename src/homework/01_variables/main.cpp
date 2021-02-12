//write include statements
#include <iostream>
#include "variables.h"


//write namespace using statement for cout

using std::cout; using std::cin;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount , total;

	cout<<"\nEnter how much you payed for your meal (Before any taxes or other scummy fees): $";

	cin>>meal_amount;

	tax_amount = get_sales_tax_amount( meal_amount);

	cout<<"What was the tip rate?(Ex: 20% = 20 ):  ";

	cin>>tip_rate;
	

	tip_rate = tip_rate / 100;

	tip_amount = get_tip_amount( meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"\nMeal Amount: \t"<<"$" <<meal_amount;
	cout<<"\nSales Tax: \t"<<"$" <<tax_amount;
	cout<<"\nTip Amount: \t"<<"$"<< tip_amount;
	cout<<"\nTotal: \t\t"<< "$"<<total<<"\n";


	return 0;
}

