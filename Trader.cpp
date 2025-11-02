#include "Trader.h"
#include <iostream>
using namespace std;

Trader::Trader(const string& name, double balance)
    : name(name), balance(balance) {}

void Trader::buyStock(Stock& stock, int qty) {
    portfolio.buy(stock, qty);
    history.push_back(Transaction("Bought", stock.getTicker(), qty, stock.getPrice()));
}

void Trader::sellStock(Stock& stock, int qty) {
    portfolio.sell(stock, qty);
    history.push_back(Transaction("Sold", stock.getTicker(), qty, stock.getPrice()));
}

void Trader::displayPortfolio() const {
    portfolio.display();
}

void Trader::displayTransactionHistory() const {
    cout << "--- Transaction History ---" << endl;
    for (const auto& t : history)
        t.display();
}
