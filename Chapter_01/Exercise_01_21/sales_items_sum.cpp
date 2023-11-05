/*--
    Exercise 1.21: Write a program that reads two Sales_item objects that have the
    same ISBN and produces their sum.
--*/

//Solution by Jannatul Fardouse

/*---
    To write a program that reads two Sales_item objects with the same ISBN and produces their sum,
    we can use the Sales_item.h header file to work with Sales_item objects. Here's a simple program that does this:
---*/


/*------ code start----------

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;

    // Read the first Sales_item object
    std::cout << "Enter the first Sales_item (ISBN, units sold, price): ";
    std::cin >> item1;

    // Read the second Sales_item object
    std::cout << "Enter the second Sales_item (ISBN, units sold, price): ";
    std::cin >> item2;

    // Check if the ISBNs are the same
    if (item1.isbn() == item2.isbn()) {
        // If the ISBNs are the same, print their sum
        Sales_item sum = item1 + item2;
        std::cout << "Sum of the two Sales_items: " << sum << std::endl;
    } else {
        std::cerr << "Error: ISBNs are not the same." << std::endl;
    }

    return 0;
}

--------code end-----------*/


/*
    Here's a breakdown of how the program works:

        Include the necessary header files: <iostream> for input and output and "Sales_item.h" to work with Sales_item objects.

        Define the main function as the program's entry point.

        Declare two Sales_item objects, item1 and item2, to store the two sales items.

        Prompt the user to enter information for the first Sales_item object and store it in item1.

        Prompt the user to enter information for the second Sales_item object and store it in item2.

        Check if the ISBNs of the two Sales_item objects are the same using the isbn() member function.
        If they are the same, proceed to calculate their sum using the + operator, and store it in a new Sales_item object, sum.

        Print the sum of the two Sales_item objects.

        If the ISBNs are not the same, display an error message.

    This program reads two Sales_item objects, checks if their ISBNs match, and if so, it calculates and prints their sum.
    If the ISBNs do not match, it reports an error.
 */