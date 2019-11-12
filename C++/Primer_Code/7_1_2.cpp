#include <string>
#include <iostream>

struct Sales_data{
    //new member: operation on Sales_data objects
    std::string isbn() const { return bookNo;}
    Sales_data & combine(const Sales_data);
    double avg_price() const;
    //data memembers are unchanged from 2.6.1
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, const Sales_data&);

std::ostream &print(std::ostream &os, const Sales_data &item){
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<""<<item.avg_price();
    return os;
}

std::istream &read(std::istream &is, const Sales_data &item){
    double price = 0;
    is >> item.units_sold >> item.bookNo >> price;
    item.revenue = price * item.units_sold;
    return is;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}