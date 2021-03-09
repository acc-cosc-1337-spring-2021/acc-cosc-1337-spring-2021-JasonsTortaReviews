//cpp
#include "loops.h"
#include <iostream>

using std::cout; using std::cin;

int factorial(int num)
{
    int sum = 1;
    int index = 1;

    while( index<= num)
    {  
        sum = sum * index;
        index++;
    }
    return sum;

}

// 1*1 = 1 
// 1*2=2
// 1*3 = 3
// 1*4 = 4