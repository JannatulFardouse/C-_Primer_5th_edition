/*--
Exercise 1.15: Write programs that contain the common errors discussed in the box
on page 16. Familiarize yourself with the messages the compiler generates.
--*/

//Solution by Jannatul Fardouse

/****** In page 16 we have:

                    COMPILATION REVISITED
Part of the compiler’s job is to look for errors in the program text. A compiler cannot
detect whether a program does what its author intends, but it can detect errors in the
form of the program. The following are the most common kinds of errors a compiler
will detect.
Syntax errors: The programmer has made a grammatical error in the C++ language.
The following program illustrates common syntax errors; each comment describes the
error on the following line:

        // error: missing ) in parameter list for main

        int main ( {                                     //error messages----
                                                warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]  
                                                error: expected primary-expression before 'return'  
                                                error: expected '}' before 'return'  
                                                error: expected ',' or ';' before 'return'  
                                                error: expected declaration before '}' token  

        // error: used colon, not a semicolon, after endl
        std::cout << "Read each file." << std::endl:     //error messages----
                                                error: expected ';' before ':' token  

        // error: missing quotes around string literal
        std::cout << Update master. << std::endl;       //error messages----
                                                error: 'Update' was not declared in this scope
                                                error: expected ';' before 'master'

        // error: second output operator is missing
        std::cout << "Write new master." std::endl;

        // error: missing ; on return statement
        return 0
        }
    Type errors: Each item of data in C++ has an associated type. The value 10, for example,
    has a type of int (or, more colloquially, “is an int”). The word "hello", including
    the double quotation marks, is a string literal. One example of a type error is passing
    a string literal to a function that expects an int argument.

    Declaration errors: Every name used in a C++ program must be declared before it is
    used. Failure to declare a name usually results in an error message. The two most
    common declaration errors are forgetting to use std:: for a name from the library
    and misspelling the name of an identifier:
        #include <iostream>
        int main()
        {
        int v1 = 0, v2 = 0;
        std::cin >> v >> v2; // error: uses "v" not "v1"
        // error: cout not defined; should be std::cout
        cout << v1 + v2 << std::endl;
        return 0;
        }
Error messages usually contain a line number and a brief description of what the
compiler believes we have done wrong. It is a good practice to correct errors in the
sequence they are reported. Often a single error can have a cascading effect and cause
a compiler to report more errors than actually are present. It is also a good idea to
recompile the code after each fix—or after making at most a small number of obvious
fixes. This cycle is known as edit-compile-debug ******/