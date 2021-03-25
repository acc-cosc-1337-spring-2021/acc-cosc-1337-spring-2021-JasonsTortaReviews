//write include statements
#include "dna.h"
#include <iostream>
#include <string>

//write using statements
using std::string; using std::endl; using std::cout; using std::cin; 

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	 string continue_;
     string dna;
    do
    {
        bool end_loop = false; 
    
        while(end_loop == false)
        {
            int input;
			
			cout<<endl<<"For GC content in the DNA Strand PRESS: 1"<<endl;
			cout<<"For the DNA Strands Complement PRESS: 2"<<endl;
            cout<<endl<<"Select (1 or 2): ";cin>>input;cout<<endl;

            if(input == 1)
            {

				cout<<"You chose GC Content Calculator!"<<endl;

				cout<<endl<<"Give me the DNA strand you would like to test: ";cin>>dna;cout<<endl;

				int gc_content = get_gc_content(dna);

				cout<<"The GC content in "<<dna<<" is: "<<gc_content<<"%"<<endl;

                end_loop = true;

                
            }
			else if( input == 2)
			{

                cout<<"You chose DNA Complement Calculator"<<endl;

                cout<<endl<<"Give me the DNA strand you would like to find the Complement of: ";cin>>dna;cout<<endl;

                string complement_dna = get_dna_complement(dna);

                cout<<"The DNA of Complement of "<<dna<<" is: "<<complement_dna<<endl;
                end_loop = true;
			}
            else
            {
                cout<<"Youre Weird Try Again"<<endl;
                end_loop = false;
            }
        }     
        
        cout<<"Would you like to CONTINUE ( Y or N ): ";cin>>continue_;cout<<endl;
    }while( continue_ == "y"|| continue_ == "Y");

	return 0;
}
