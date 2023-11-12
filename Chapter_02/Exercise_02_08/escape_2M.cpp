/*--
    Exercise 2.8: Using escape sequences, write a program to print 2M followed by a newline.
    Modify the program to print 2, then a tab,then an M, followed by a newline.
--*/

// Solution by Jannatul Fardouse

#include <iostream>

int main() {
    // Print "2M" followed by a newline
    std::cout << "2\115\n";

    // Print "2", tab, "M" followed by a newline
    std::cout << "2\tM\n";

    return 0;
}

/*
                            -----Explanation-----

    In the first std::cout statement, \115 is an octal escape sequence representing the ASCII code for the character 'M'.
    In the second std::cout statement, \t represents a tab character.
    When you run this program, the output will be:

                2M
                2   M

    The first line prints "2M" followed by a newline, and the second line prints "2", a tab, "M", and a newline.

*/