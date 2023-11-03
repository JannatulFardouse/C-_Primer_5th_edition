/*-- Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use
a separate statement to print each operand.
 --*/

 // Solution by Jannatul Fardouse

 /*-- now we are going to print the program in a separate statement which we alredy had done in exercise_01_04 solution --*/

 #include<iostream>
int main(){
    std:: cout<<" Enter two integer values or numbers  for v1 and v2 : "<< std :: endl;
    int v1 = 0, v2 =0;
    std:: cin >>v1>> v2;
    std:: cout << " The product of ";
    std:: cout<< v1;
    std::cout<<" and ";
    std:: cout<< v2;
    std::cout<< " is ";
    std:: cout<< v1 * v2;
    std:: cout << std :: endl;

    return 0;
}