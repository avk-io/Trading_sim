#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Stock {
private:
    string name;
    string ticker;
    double price;

public:
    Stock(string n, string t, double p);
    

    void updatePrice(double newPrice);
    void displayInfo() const;

    string getTicker() const;
    double getPrice() const;
};

#endif
