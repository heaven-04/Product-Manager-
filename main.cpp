#include <iostream>
#include <vector>
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;
#include "Product.h"
void saveInventory(const std::vector<Product>& v) {
        json j;
        for (const auto& i : v) {
            j.push_back({
                {"id", i.getID()},
                {"name", i.getName()},
                {"price", i.getPrice()},
                {"quantity", i.getQuantity()}
            });
        }
        std::ofstream file("inventory.json");
        file << j.dump(4);
        file.close();
    }
bool doesidexist(const std::vector<Product>& v ,int id) {
    for(const auto& i: v) {
        if (id==i.getID()) return true;
    }
    return false;
}
void loadInventory(std::vector<Product>& v) {
        std::ifstream file("inventory.json");
        if (!file.is_open()) {
            return;
        }
        json j;
        file >> j;
        for (const auto& item : j) {
            int id = item["id"];
            std::string name = item["name"];
            double price = item["price"];
            int quantity = item["quantity"];
            v.emplace_back(id, name, price, quantity);
        }
    }
int main() {
    std::vector<Product> products;
    loadInventory(products);
    bool running = true;
    while (running) {
        std::cout<<"--- Inventory Manager ---"<<'\n' ;
        std::cout<<"1. Add a Product"<<'\n';
        std::cout<<"2. View All Products"<<'\n';
        std::cout<<"3. Exit"<<"\n";
        std::cout<<"Enter your choice: ";
        int choice;
        std::cin>>choice;
        switch (choice) {
            case 1: {
                std::cout<<"Enter ID :  ";
                int id;
                std::cin>>id;
                if(doesidexist(products,id)) {
                    std::cout<<"Already Exist ! "<<'\n';
                    break;
                }
                std::cout<<"Enter Name :  ";
                std::string name;
                std::getline(std::cin >> std::ws, name);
                std::cout<<"Enter Price : ";
                double price;
                std::cin>>price;
                std::cout<<"Enter Quantity : ";
                int quantity;
                std::cin>>quantity;
                products.emplace_back(id,name,price,quantity);
                break;
            }
            case 2: {
                for(const auto& product : products) {
                    product.printProductInfo();
                }
                break;
            }
            case 3:running = false;break;
            default:break;
        }
    }
    saveInventory(products);
    return 0;
}