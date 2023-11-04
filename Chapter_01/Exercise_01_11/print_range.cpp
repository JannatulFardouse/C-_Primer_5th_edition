/*--
 Exercise 1.11: Write a program that prompts the user for two integers. Print each
number in the range specified by those two integers. 
--*/

// Solution by Jannatul Fardouse

/*-- now we are going to print the range of two integers 
where we will use the greater than '>' 
and less than '<' operator to compare the starting and ending range of the two integer numbers
--*/

#include <iostream>

int main(){

    int min, max;
    std :: cout<< " Enter the min integer number or start of range " ;
    std:: cin>>min;
    std:: cout << " Enter the max integer number or end of range ";
    std:: cin>>max;

    //simplification of the data entred by the user

if(min > max){
    std:: cout << " Error: The start range must be larger than the end range!!";
}
while(min <= max){
    std:: cout<< min<<std::endl;
    min++;
}

    return 0;
}