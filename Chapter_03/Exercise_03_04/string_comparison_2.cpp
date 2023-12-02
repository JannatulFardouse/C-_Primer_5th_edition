/*
    Exercise 3.4: Write a program to read two strings and report whether the strings
    are equal. If not, report which of the two is larger. Now, change the program to report
    whether the strings have the same length, and if not, report which is longer.
*/

// Solution by Jannatul Fardouse

//Now, change the program to report whether the strings have the same length, and if not, report which is longer.

#include<iostream>

using std:: cin;
using std:: cout;
using std:: string;
using std:: endl;

/*
         Reads two strings and then check the lengths of the strings.
         Can not handle strings of zero length.
         0 Upon correct program completion. 
 */
 int main(){

    string s1, s2;
    
    cin >> s1 >> s2;
    if(s1.size() == s2.size()) {
        cout << "The two strings are of equal length.";
    } else if(s1.size() > s2.size()) {
        cout << "The first string is longer than the second.";
    } else {
        cout << "The first string is shorter than the second.";
    }
    return 0;
 }