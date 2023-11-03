/*--
Exercise 1.4: Our program used the addition operator, +, to add two numbers. Write
a program that uses the multiplication operator, *, to print the product instead.
---*/
// Solution by Jannatul Fardouse

#include <iostream>

/*--Multiplication of two user defines integers(int)--*/
int main(){
    int v1 = 0, v2 = 0;
    std::cout<<"Enter two integer values for v1 & v2 : "<<std::endl; //std endl use for a new line
    /*-- std cin used for taking or enter the input. Note that: after writing cin we should use 2times right shift arrows ">>"  --*/
    std :: cin>>v1>>v2; 
    /*now we are going to print the multiplication results of v1 and v2 */
    std:: cout<< "The product of "<<v1 << " and " <<v2 << " is " << v1*v2 << std::endl;
    return 0;
}