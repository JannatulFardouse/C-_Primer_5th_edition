/*
    Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change
    the program to separate adjacent input strings by a space.
*/
// Solution By Jannatul Fardouse

//3.5 part 2: Print the concatenated string. Next, change the program to separate adjacent input strings by a space.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    string temp, result;
    string spacer = " ";

    while(cin >> temp) {
        result.append(temp);
        result.append(spacer);
    }
    cout << result;
    
    return 0;
}