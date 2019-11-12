#include <iostream>
#include <string>

struct Sales_Data {
    //constructors
    //friend is not a general declaration of fucntion, it only specifies access
    friend Sales_Data add(const Sales_Data&, const Sales_Data&);
    friend std::istream &read(std::istream&, Sales_Data&);
    friend std::ostream &print(std::ostream&, const Sales_Data&);
public:
    Sales_Data() = default;
    Sales_Data(const std::string &s): bookNo(s){}
    Sales_Data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n),revenue(p*n){}
    Sales_Data(std::istream&);

    //other members as before
    std::string isbn() const {return bookNo;}
    Sales_Data& combine(const Sales_Data&);
private:
    double avg_price() const{return units_sold ? revenue/units_sold:0}
    std::string bookNo;
    unsigned units_sold =0;
    double revenue = 0.0;
};

//constructors outside the class body
//declarations for nonmember parts of the Sales_data interface
Sales_Data::Sales_Data(std::istream &is){
    read(is, *this);
}