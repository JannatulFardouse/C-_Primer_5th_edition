///*-- 
//Exercise 1.8: Indicate which, if any, of the following output statements are legal:
//std::cout << "/*";
// std::cout << "*/";
//std::cout << /* "*/" */;
// std::cout << /* "*/" /* "/*" */;
//After you’ve predicted what will happen, test your answers by compiling a program
//with each of these statements. Correct any errors you encounter.
// --*/

// Solution by Jannatul Fardouse
/*-- output test --*/
#include <iostream>

int main(){

std::cout << "/*";                // /*[1] + Done will print as output
std::cout << "*/";               // /**/[1] + Done  will print as output

// std::cout << /* "*/" */;       // will not going to compile the 1st citation mark, end up inside a comment.

std::cout << /* "*/" /* "/*" */;    // /**/ /* [1] + Done will print as output

return 0;

}