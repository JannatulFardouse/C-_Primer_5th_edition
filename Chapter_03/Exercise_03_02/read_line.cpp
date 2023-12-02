/*
    Exercise 3.2: Write a program to read the standard input a line at a time. Modify your
    program to read a word at a time.

 */

// Solution by Jannatul Fardouse

//read the standard input a line at a time

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input;
    while(getline(cin, input))
    {
        if(input.empty())
            break;
        cout << input;
        cout << endl;
    }
    return 0;
}