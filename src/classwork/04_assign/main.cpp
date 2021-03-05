//write includes statements
#include "loops.h"
#include <iostream>

//write using statements for cin and cout
using std::cin; using std::cout; using std::endl;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num ;
	char continue_ ;
	
	do 
	{
		cout<<"\nHey enter a number and I will make a factorial from it!(Min = 1 , Max = 10) :3 "<<endl;
		
		bool make_sure_it_works = false;
			
		while(make_sure_it_works == false)
		{
		
			cout<<"\nNumber goes here| --->";cin>>num;
			
			if(num >= 1 && num <= 10)
			{
				make_sure_it_works = true;

			}
			else
			{
				cout<<"\nMake sure the number is >= 1 && number is <= 10)!!!!"<<endl;
				cout<<"\nYou can try again|"<<endl;
			}
		}
		
		int new_num = factorial(num);
		
		cout<<endl<<"The Factorial is| --->"<<new_num<<endl;

		cout<<endl<<"Would you like to continue(Y or N)?:\t";cin>>continue_;
			
	}while (continue_ == 'y'|| continue_ == 'Y');
	
	return 0;
}


