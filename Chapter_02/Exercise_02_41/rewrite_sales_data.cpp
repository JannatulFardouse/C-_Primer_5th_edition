/*
    Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22),
    § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your Sales_data class in
    the same file as your main function.

*/

// Solution by Jannatul Fardouse

/*
    Let's rewrite the exercises using the Sales_data class:

Exercise 1.5.1 (p. 22):

-----------coding part----------

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data item;
    double price;

    std::cin >> item.bookNo >> item.unitsSold >> price;
    item.revenue = item.unitsSold * price;

    std::cout << item.bookNo << " " << item.unitsSold << " " << item.revenue << " " << price << std::endl;

    return 0;
}
 ------end of coding from p.22----------

*/

/*
Exercise 1.5.2 (p. 24):

----------coding part------------
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data item1, item2;
    double price1, price2;

    std::cin >> item1.bookNo >> item1.unitsSold >> price1;
    item1.revenue = item1.unitsSold * price1;

    std::cin >> item2.bookNo >> item2.unitsSold >> price2;
    item2.revenue = item2.unitsSold * price2;

    if (item1.bookNo == item2.bookNo) {
        unsigned totalSold = item1.unitsSold + item2.unitsSold;
        double totalRevenue = item1.revenue + item2.revenue;

        std::cout << item1.bookNo << " " << totalSold << " " << totalRevenue << " ";
        if (totalSold != 0) {
            std::cout << totalRevenue / totalSold << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }

        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN." << std::endl;
        return -1;
    }
}

--------end of code from p.24----------

*/

/*
Exercise 1.6 (p. 25):

----------coding part----------

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data item;
    double price;

    while (std::cin >> item.bookNo >> item.unitsSold >> price) {
        item.revenue = item.unitsSold * price;
        std::cout << item.bookNo << " " << item.unitsSold << " " << item.revenue << " " << price << std::endl;
    }

    return 0;
}

---------end of code from p.25---------

*/

//These programs use the Sales_data class to represent sales information and perform calculations based on the provided input.

