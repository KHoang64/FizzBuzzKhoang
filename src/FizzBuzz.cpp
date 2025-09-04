#include "FizzBuzz.hpp"

#include <iostream>

/*
    DIRECTIONS:

    FizzBuzz is a common coding interview challenge that requires the programmer


    -- to print numbers from 1 through n, --

     but with specific replacements.


    If the number is divisible by 3, print "Fizz". - check

    If the number is divisible by

    5, print "Buzz".

     If the number is divisible by both 3 and 5, print "FizzBuzz"

    Each number or string should be followed by a newline character.

    Program FizzBuzz with the given int variable n.
*/

void FizzBuzz(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "the following number is " << n;
         if (i % 5 && i % 3)
        {
            std::cout << "Rizz\n";
        }
        else if (i % 5)
        {
            std::cout << "Buzz\n";
        }
        else if (i % 3)
        {
            std::cout << "RizzBuzz\n";
        }
        else
        {
            std::cout << i;
        }
    }
}