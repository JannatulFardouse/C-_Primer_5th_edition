/*
    Exercise 3.4: Write a program to read two strings and report whether the strings
    are equal. If not, report which of the two is larger. Now, change the program to report
    whether the strings have the same length, and if not, report which is longer.
*/

// Solution by Jannatul Fardouse

//read two strings and report whether the strings are equal. If not, report which of the two is larger.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

/**
Reads two strings and checks whether they are equal.
Will report which of the two strings that is larger, in the case where the strings are not equal.
Can not handle strings of zero length.
0 Upon correct program completion. 
 */
int main() {
    string s1, s2;
    
    cin >> s1 >> s2;
    if(s1 == s2) {
        cout << "The two strings are equal.";
    } else if(s1 > s2) {
        cout << "The first string is larger than the second.";
    } else {
        cout << "The first string is smaller than the second.";
    }
    return 0;
}

