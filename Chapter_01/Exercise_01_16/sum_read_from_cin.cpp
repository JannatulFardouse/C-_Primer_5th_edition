/*--
 Exercise 1.16: Write your own version of a program that prints the sum of a set of
integers read from cin.
--*/

// Solution by Jannatul Fardouse

/* now we are going to print Sum of the integer numbers which are given by user */

#include <iostream>

int main (){

    int sum =0;                 //initialize the sum to 0
    int value;                  //Declare value to store each input integer

    std:: cout<< " Enter integers to calculate the sum"<< std::endl;
    std:: cout<< " Press ctrl+D (Unix/Linux) or ctrl+Z (windows) to end the input.\n ";

    while(std::cin >> value){
        sum =+ value;           //sum = sum + value
    }
    std:: cout<<"Sum of the entered integers is : "<<sum;

    return 0;
}