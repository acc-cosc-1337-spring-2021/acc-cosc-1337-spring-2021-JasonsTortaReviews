#include "dna.h"
#include <algorithm>
#include <string>
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double counter = 0;
    double gc_content;

    for(std::size_t i = 0; i < dna.size();++i)
    {
        if(char(dna[i]=='C') || char(dna[i]=='G')|| char(dna[i]=='c')|| char(dna[i]=='g'))
        {
            counter++;
                 
        }

    }
    double dna_strand_length = dna.length();
    gc_content = 100*(counter/dna_strand_length);

    return gc_content;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
  int len = dna.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){

    //Using temp to store the char value at index i so 
    //you can swap it in later for char value at index n
    char temp = dna[i];
    dna[i] = dna[n];
    dna[n] = temp;
    n = n-1;

  }
    return dna;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string reverse_dna;
    
    reverse_dna  = get_reverse_string(dna);
    
    for(std::size_t i = 0; i <= reverse_dna.size();++i)
    {
        switch(reverse_dna[i])
        {
            case 'C':
                reverse_dna[i]='G';
                break;
            case 'G':
                reverse_dna[i]='C';
                break;
            case 'A':
                reverse_dna[i]='T';
                break;
            case 'T':
                reverse_dna[i]='A';
                break;
            
            
        }
    }
    return reverse_dna;
}
