#pragma once
#include <vector>
#include <string>
#include "Stock.h"
#include "Transaction.h"
#include "Portfolio.h"

class Trader {
private:
    Portfolio<Stock> portfolio;
    std::vector<Transaction> history;
    std::string name;
    double balance;

public:
    Trader(const std::string& name, double balance);
    void buyStock(Stock& stock, int qty);
    void sellStock(Stock& stock, int qty);
    void displayPortfolio() const;
    void displayTransactionHistory() const;
};
