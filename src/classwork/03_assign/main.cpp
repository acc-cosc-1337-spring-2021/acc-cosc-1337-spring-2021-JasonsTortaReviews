//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
#include <string>
//Write namespace using statements for cout and cin
using std::cout;	using std::cin; 

int main() 
{

	int grade;
	
	cout<<"Enter the latest grade you have earned from (0 - 100): \n";
	
	cin>>grade;

	std::string letter_grade1 = get_letter_grade_using_if(grade);

	std::string letter_grade2 = get_letter_grade_switch(grade);
	
	cout<<"Graded using--> if,elseif,and default Structure! \n";
	cout<<"\n"<<"Grade Input: \t"<<grade<<"\t"<<"|"<<"\t"<<letter_grade1<<"\t"<< "<-- Letter Grade\n";
	cout<<"\nGraded with--> Switch Statement! \n";
	cout<<"\n"<<"Grade Input: \t"<<grade<<"\t"<<"|"<<"\t"<<letter_grade2<<"\t"<< "<--  Letter Grade\n";
	
	
	return 0;
}
