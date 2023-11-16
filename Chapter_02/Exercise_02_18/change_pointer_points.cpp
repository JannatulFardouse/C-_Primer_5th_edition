/*
    Exercise 2.18: Write code to change the value of a pointer. Write code to change the
    value to which the pointer points.
*/

// Solution by Jannatul Fardouse

#include <iostream>

int main() {
    // Declare an integer variable and a pointer to int
    int intValue = 42;
    int *intPtr = &intValue;

    // Print the original values
    std::cout << "Original value: " << intValue << std::endl;
    std::cout << "Original value through pointer: " << *intPtr << std::endl;

    // Change the value of the pointer
    int newIntValue = 87;
    intPtr = &newIntValue;

    // Print the updated values
    std::cout << "Updated value through pointer: " << *intPtr << std::endl;

    // Change the value to which the pointer points
    *intPtr = 99;

    // Print the final values
    std::cout << "Final value: " << newIntValue << std::endl;
    std::cout << "Final value through pointer: " << *intPtr << std::endl;

    return 0;
}

/*
    In this example:

        We declare an integer variable 'intValue' and a pointer to an integer 'intPtr' pointing to 'intValue'.
        We change the value of the pointer to point to a new integer variable 'newIntValue'.
        We change the value to which the pointer points by dereferencing it and assigning a new value ('99' in this case).

        The output will be:
            Original value: 42
            Original value through pointer: 42
            Updated value through pointer: 87
            Final value: 99
            Final value through pointer: 99

*/