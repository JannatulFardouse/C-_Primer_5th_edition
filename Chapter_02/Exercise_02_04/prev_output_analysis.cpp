/*--
    Exercise 2.4: Write a program to check whether your predictions were correct. If not,
    study this section until you understand what the problem is.
--*/


//Solution by Jannatul Fardouse

//Here's a simple C++ program that checks the expressions and prints the results:

#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;  // 32
    std::cout << u - u2 << std::endl;  // Very large positive number (wraps around)

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;  // 32
    std::cout << i - i2 << std::endl;  // -32

    std::cout << i - u << std::endl;   // 0
    std::cout << u - i << std::endl;   // 0 (wraps around)

    return 0;
}

/*-----output---------
    When we run this program, we should get the output as explained earlier:
            32
            4294967264
            32
            -32
            0
            0
    This program confirms the behavior of the expressions and the predictions made in the previous explanation.
    ------*/