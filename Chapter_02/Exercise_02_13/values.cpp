/*--
    Exercise 2.13: What is the value of j in the following program?
        int i = 42;
        int main()
        {
        int i = 100;
        int j = i;
        }
--*/

// Solution by Jannatul Fardouse

/*--
        In the given program, there are two variables named 'i': one at the global scope and one within the 'main' function. 
        The 'main' function also declares a variable 'j' and initializes it with the value of the local variable 'i':
--*/

int i = 42;  // Global variable
int main()
{
    int i = 100;  // Local variable, shadows the global variable
    int j = i;    // Initialize j with the value of the local variable i (100)
}

/*
    So, the value of 'j' will be '100'. 
    The local variable 'i' within the 'main' function takes precedence over the global variable 'i' in the same scope.
*/