/*-- 
Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a
decrement operator (--) that subtracts 1. Use the decrement operator to write a while
that prints the numbers from ten down to zero. 
--*/

// Solution by Jannatul Fardouse

#include <iostream>

/*-- now we are going to print the the numbers from 0 to 10 by using decrement operator --*/

int main(){
    int number = 10;
    while ( number >=0){
        std:: cout << number << std :: endl;
        --number; // print the number = 10-1 =9 then 9-1 = 8 so the output will be number -1 until got 0
    }
    return 0;
}