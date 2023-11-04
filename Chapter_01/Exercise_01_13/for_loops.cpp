/*--
Exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.
pg.13:the first two exercises are:
        Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.
        Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a
        decrement operator (--) that subtracts 1. Use the decrement operator to write a while
        that prints the numbers from ten down to zero.
--*/

//Solution by Jannatul Fardouse

/*-- now we are going to solve the problems by applying for loop --*/

#include <iostream>

int main(){
    //sum from 50 to 100
    std:: cout << "Let's sum the numbers from 50 to 100!!! " <<std::endl;
    int sum = 0;
    for(int i = 50; i<=100; i++){
        sum+=i;  // this means that sum = sum + i
    }
    std:: cout << sum<< std:: endl;

    //print down values from 10 to 0

    std:: cout<< "Let's print the numbers from 10 down to 0"<< std::endl;

   for( int j =10; j>=0; j--){
        std:: cout << j << std :: endl;
    }

    std:: cout<<std::endl;

    return 0;
    
}