/*--
    Exercise 1.22: Write a program that reads several transactions for the same ISBN.
    Write the sum of all the transactions that were read.
--*/

// Solution by Jannatul Fardouse
/*
    To write a program that reads several transactions for the same ISBN and calculates the sum of all those transactions, 
    we can use a while loop.
    
    Here's a simple C++ program that accomplishes this:
*/
/*----------start code-------------

            #include <iostream>
            #include "Sales_item.h"
            
            int main() {
                Sales_item total; // To store the running total
            
                // Read the first transaction
                if (std::cin >> total) {
                    Sales_item transaction; // To store each new transaction
            
                    // Read and sum subsequent transactions with the same ISBN
                    while (std::cin >> transaction) {
                        if (total.isbn() == transaction.isbn()) {
                            total += transaction; // Add the current transaction to the total
                        } else {
                            std::cerr << "Error: ISBNs do not match." << std::endl;
                        }
                    }
            
                    // Print the sum of all transactions
                    std::cout << "Total for ISBN " << total.isbn() << ": " << total << std::endl;
                } else {
                    std::cerr << "Error: No data entered." << std::endl;
                }
            
                return 0;
            }
---------end code--------*/
/*---------
    Here's how the program works:

            Include the necessary header files: <iostream> for input and output and "Sales_item.h" to work with Sales_item objects.

            Define the main function as the program's entry point.

            Declare two Sales_item objects, total and transaction. 
            The total variable will store the running total, and the transaction variable is used to read each new transaction.

            Read the first transaction into the total variable using std::cin.

            If there's data entered for the first transaction, enter a while loop to continue reading subsequent transactions.

            In the loop, read each new transaction into the transaction variable.

            Check if the ISBN of the total matches the ISBN of the transaction. If they match, 
            add the current transaction to the total using the += operator.

            If the ISBNs do not match, display an error message.

            After the loop, print the sum of all transactions using the total variable.

            If there's no data entered for the first transaction, display an error message.

    This program allows us to enter multiple transactions with the same ISBN, 
    and it will calculate and print the total sum of those transactions. If the ISBNs do not match, it will report an error.
------*/