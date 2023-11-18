/*
    Exercise 2.42: Write your own version of the Sales_data.h header and use it to
    rewrite the exercise from § 2.6.2 (p. 76).
*/

// Solution by Jannatul Fardouse
/*
    let's create a Sales_data header file and use it to rewrite the exercise from § 2.6.2:

Sales_data.h:

--------code start-------

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

#endif // SALES_DATA_H

---------end code---------
*/

/*

Exercise 2.6.2:

----------code start---------

#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data total;
    double price;

    if (std::cin >> total.bookNo >> total.unitsSold >> price) {
        total.revenue = total.unitsSold * price;

        Sales_data trans;

        while (std::cin >> trans.bookNo >> trans.unitsSold >> price) {
            trans.revenue = trans.unitsSold * price;

            if (total.bookNo == trans.bookNo) {
                total.unitsSold += trans.unitsSold;
                total.revenue += trans.revenue;
            } else {
                std::cout << total.bookNo << " " << total.unitsSold << " " << total.revenue << " ";
                if (total.unitsSold != 0) {
                    std::cout << total.revenue / total.unitsSold << std::endl;
                } else {
                    std::cout << "(no sales)" << std::endl;
                }

                total = trans;
            }
        }

        std::cout << total.bookNo << " " << total.unitsSold << " " << total.revenue << " ";
        if (total.unitsSold != 0) {
            std::cout << total.revenue / total.unitsSold << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }

        return 0;
    } else {
        std::cerr << "No data entered!" << std::endl;
        return -1;
    }
}

-------end code-----------

*/

/*

        This program reads transactions from the standard input, where each transaction consists of a book number, 
        the number of copies sold, and the sales price. The program then prints the total sales for each unique book number. 
        It uses the Sales_data structure defined in the header file Sales_data.h.
        
*/