#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
using namespace std;

class Transaction {
private:
    string type;      
    string ticker;    
    int quantity;     
    double price;     

public:
    Transaction(const string& type, const string& ticker, int quantity, double price)
        : type(type), ticker(ticker), quantity(quantity), price(price) {}

    void display() const {
        cout << type << " " << quantity << " of " << ticker
             << " at price " << price << endl;
    }
};

#endif
