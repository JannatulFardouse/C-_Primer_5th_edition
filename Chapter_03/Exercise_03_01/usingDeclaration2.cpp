/*
    Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.
*/

// Solution by Jannatul Fardouse

// Rewrite the exercises from § 2.6.2 (p. 76)

#include <iostream>
#include <string>
#include "Sales_data.h"

//using declaration
using std::endl;
using std::cerr;
using std::cin;
using std::cout;

int main() {
    Sales_data data1, data2;
    double price = 0;
    
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if(data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << totalRevenue << " ";
        if(totalCnt != 0)
            cout << totalRevenue/totalCnt << endl;
        else
            cout << "(no sales)" << endl;
        return 0;
    } else {
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }
}
