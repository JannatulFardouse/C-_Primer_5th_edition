/*
    Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.
*/

// Solution by Jannatul Fardouse

// Rewrite the exercises from § 1.4.1 (p. 13)

#include <iostream>

//using declarations

using std::cout;
using std:: endl;

int main(){
    int sum = 0;

    // sum values from 1 through 10 inclusive
    for(int val = 1; val <= 10; val++)
    sum += val;                       //equivalent to sum = sum + val
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}