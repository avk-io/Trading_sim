#ifndef TRADER_H
#define TRADER_H

#include <string>
#include <map>
#include <iostream>
#include <iomanip>
#include "Stock.h"

using namespace std;

class Trader {
private:
    string name;
    double balance;
    map<string, int> portfolio;

public:
    Trader(string n, double b);

    void buyStock(Stock &stock, int qty);
    void sellStock(Stock &stock, int qty);
    void displayPortfolio() const;
};

#endif
