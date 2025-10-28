#ifndef TRADER_H
#define TRADER_H

#include <string>
#include <map>
#include <bits/stdc++.h>
#include <iomanip>
#include "Stock.h"

using namespace std;


struct Transaction{
    string type;
    string stockName;
    int quantity;
    double price;
};

class Trader {
private:
    string name;
    double balance;
    map<string, int> portfolio;
    vector<Transaction> history;

public:
    Trader(string n, double b);

    void buyStock(Stock &stock, int qty);
    void sellStock(Stock &stock, int qty);
    void displayPortfolio() const;
    void displayTransactionhistory() const;
};

#endif
