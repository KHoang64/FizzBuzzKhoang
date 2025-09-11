#include "FizzBuzz.hpp"

#include <iostream>


/*
@param n: the number to loop to (inclusive)
Prints Fizz if divisible by 3
Prints Buzz if divisible by 5
Prints FizzBuzz if both
else just print current number in [1,n]
*/

void FizzBuzz(int n)
{



#pragma region Old code v1

// for (int i =0; i<= n ; i++){
//     if ( (i % 3 == 0 ) && (i % 5 ==0  ) ){
//         std::cout<<"FizzBuzz\n";

//     }
//     else if ( (i % 5 == 0 ) ){
//         std::cout<<"Buzz\n";
//     }
//     else if ((i% 3 == 0)){
//         std::cout<<"Fizz\n";
//     }
//     else{
//         std::cout << i <<"\n";
//     }
#pragma endregion

#pragma region Notes for v2
// demo of mod as bool

//      if (i % 4) 
//      {
//         //note: Runs if i is NOT divisible by 4
//      }

//Same behavior
//      if ((i % 4) != 0) {
//          
//      }
    
#pragma endregion

#pragma region Code v2 no == 0
//________________________________

    for (int i = 1; i <= n; i++) {
        if (!(i % 3) && !(i % 5)) {
            std::cout << "FizzBuzz\n";
        }
        else if (!(i % 5)) {
            std::cout << "Buzz\n";
        }
        else if (!(i % 3)) {
            std::cout << "Fizz\n";
        }
        else {
            std::cout << i << "\n";
        }
    }
#pragma endregion


}