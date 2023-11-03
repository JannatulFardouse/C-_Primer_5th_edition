/*-- Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100 --*/

// Solution by Jannatul Fardouse

/*-- now we are going to print the sum of the numbers from 50 to 100 --*/

#include <iostream>

int main(){
    int sum = 0;
    int number = 50;
    while(number<=100){
        sum+=number;  // this means that sum = sum + number
        number++; // increament of the number = number + 1
    }

    std:: cout <<"The sum of the numbers from 50 to 100 is : "<< sum<<std::endl;

    return 0;
    
}