/*--
    Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that
printed a range of numbers so that it handles input in which the first number is smaller
than the second.
--*/

//Solution by Jannatul Fardouse

/*
    To revise the program from Exercise 1.19 to handle input where the first number is smaller than the second,
    we can use a for loop with a more general approach. Here's a modified program that allows us to input a range of numbers,
    regardless of whether the first number is smaller than the second:
*/

                    #include <iostream>

                    int main() {
                        int val1, val2;

                        std::cout << "Enter two integers, separated by a space: ";
                        std::cin >> val1 >> val2;

                        if (val1 <= val2) {
                            for (int i = val1; i <= val2; ++i) {
                                std::cout << i << " ";
                            }
                        } else {
                            for (int i = val2; i <= val1; ++i) {
                                std::cout << i << " ";
                            }
                        }

                        std::cout << std::endl;

                        return 0;
                    }
/*
    In this revised program:
    We prompt the user to enter two integers, val1 and val2.

    We use an if statement to check whether val1 is less than or equal to val2.
    If this condition is true, it means the user entered the range correctly (from smaller to larger).

    If val1 is less than or equal to val2, we use a for loop to print the numbers from val1 to val2.

    If val1 is greater than val2, we use a separate for loop to print the numbers from val2 to val1.

    This modification allows the program to handle input where the first number is smaller than the second,
    ensuring that the range of numbers is correctly printed in ascending order.
*/