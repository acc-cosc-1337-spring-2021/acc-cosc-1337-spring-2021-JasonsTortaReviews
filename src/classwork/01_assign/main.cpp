//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

using std::cout;	using std::cin; 

int main() 
{
	cout<<"\nEnter a number you want to multiply by 5: ";

	int num;

	cin>>num;
	
	int result = mult_numbers(num);

	cout<<"\nThe total value of both numbers multiplied is: "<<result<<  " (!!!!!Nice it worked!!!!)\n";

	int num1 = 4;

	result = mult_numbers(num1);

	cout<<"\nAlso, if you didn't know, 4 * 5 is this --->>> : "<<result<<  " (!!!!!Nice it worked!!!!)\n";

	return 0;
}

