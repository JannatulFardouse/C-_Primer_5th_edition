/*--

    Exercise 1.23: Write a program that reads several transactions and counts how many
    transactions occur for each ISBN.

--*/

//Solution by Jannatul Fardouse

/*  To write a program that reads several transactions and counts how many transactions occur for each ISBN, we can use a while loop 
and a std::map to keep track of the counts for each ISBN.

 Here's a C++ program that does this:
*/
/*---------start code-------
#include <iostream>
#include <map>
#include "Sales_item.h"

int main() {
    std::map<std::string, int> isbnCount; // A map to store counts for each ISBN

    Sales_item transaction; // To store each transaction

    // Read and count transactions
    while (std::cin >> transaction) {
        // Increment the count for the current transaction's ISBN
        isbnCount[transaction.isbn()]++;
    }

    // Print the counts for each ISBN
    for (const auto &pair : isbnCount) {
        std::cout << "ISBN: " << pair.first << " Count: " << pair.second << std::endl;
    }

    return 0;
}

-------end code---------*/

/*
    Here's how the program works:

            Include the necessary header files: <iostream> for input and output and "Sales_item.h" to work with Sales_item objects.

            Include <map> to use the std::map container for counting ISBN occurrences.

            Define the main function as the program's entry point.

            Declare a std::map named isbnCount to store the counts for each ISBN. The keys will be ISBNs (strings), and
            the values will be the counts (integers).

            Declare a Sales_item object named transaction to store each transaction.

            Enter a while loop to continuously read transactions using std::cin.

            Inside the loop, increment the count for the current transaction's ISBN in the isbnCount map.
            If the ISBN is encountered for the first time, it will be automatically initialized to zero.

            After reading all transactions, exit the loop.

            Iterate through the isbnCount map using a range-based for loop to print the counts for each ISBN.

    This program reads multiple transactions, counts how many times each ISBN appears, and prints the counts for each ISBN encountered.
*/