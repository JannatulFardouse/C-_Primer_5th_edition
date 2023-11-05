/*--
    Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy
    of Sales_item.h in the Chapter 1 code directory. Copy that file to your working
    directory. Use it to write a program that reads a set of book sales transactions, writing
    each transaction to the standard output.
--*/

// Solution by Jannatul Fardouse

            #include <iostream>
            #include "Sales_item.h"
            
            /**
                    Reads a set of Sales_item's and echos back each entry. Return 0 upon correct program exit
             **/
            
            int main() {
                Sales_item si;
                while(std::cin >> si) {
                    std::cout << si << std::endl;
                }
                        
                return 0;
            }

/*****
        The provided program is designed to read a set of book sales transactions and write each transaction to the standard output.
        It uses the Sales_item.h header file to define the Sales_item class for handling book sales information.

                        Here's a brief explanation of the program:

                It includes necessary header files: <iostream> and "Sales_item.h".

                It defines the main function, which is the entry point of the program.

                Inside the main function, it declares a Sales_item object named si.

                It enters a while loop that continues as long as data can be read from std::cin into the si object.
                This loop reads book sales transactions from the standard input (presumably in a format like ISBN, units sold, and price).

                Inside the loop, it prints each Sales_item object si to the standard output using std::cout.
                The << operator is overloaded for the Sales_item class to allow easy output of the transaction details.

                After reading and echoing back all transactions, the program returns 0 to indicate a successful exit.

        To use this program, you need to have the Sales_item.h header file in your working directory and
        ensure that the input provided through std::cin follows the format expected by 
        the Sales_item class (usually ISBN, units sold, and price).
        The program will then display each transaction on the standard output.
*****/