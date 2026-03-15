#include <iostream>
#include "Product.h"
#include <string>

Product::Product(int id,std::string name,double price ,int quantity) {
    this->ID=id;
    this->Name=std::move(name);
    this->Price=price;
    this->Quantity=quantity;
}
int Product::getID() const{
    return this->ID;
}
std::string Product::getName() const {
    return this->Name;
}
double Product::getPrice() const {
    return this->Price;
}
int Product::getQuantity()const {
    return this->Quantity;
}
void Product::setQuantity(int quantity) {
    if (quantity>=0) this->Quantity=quantity;
}
void Product::printProductInfo() const {
    std::cout<<"-------------------"<<std::endl;
    std::cout<<"ID: "<<this->ID<<std::endl;
    std::cout<<"Name: "<<this->Name<<std::endl;
    std::cout<<"Price: "<<this->Price<<std::endl;
    std::cout<<"Quantity: "<<this->Quantity<<std::endl;
    std::cout<<"-------------------"<<std::endl;
}
