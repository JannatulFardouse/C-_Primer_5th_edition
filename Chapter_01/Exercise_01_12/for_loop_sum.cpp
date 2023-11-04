/*--
Exercise 1.12: What does the following for loop do? What is the final value of sum?
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;
--*/

// Solution by Jannatul Fardouse

#include <iostream>
int main(){
    int sum =0;
    for(int i =0; i <= 100; i++){
        sum+=i;     //sum = sum + i; valu of i start from 0 to 100.
    }
    std:: cout << sum <<std :: endl; //sum from 0 to 100 should be 5050
    
    return 0;
}