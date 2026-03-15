#pragma once
#include <string>
class Product {
private :
    int ID;
    std::string Name;
    double Price;
    int Quantity;
    public:
    Product(int,std::string,double,int);
    int getID() const ;
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    void setQuantity(int);
    void printProductInfo()const;
};