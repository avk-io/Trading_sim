#include "Trader.h"

Trader::Trader(string n,double b){
    name = n;
    balance = b;
}

void Trader::buyStock(Stock &stock, int qty){
    double cost = stock.getPrice()*qty;
    if(cost>balance){
        cout<<"Not enough money to buy "<<qty<<" shares of "<<stock.getTicker()<<endl;
    }else{
        balance -= cost;
        portfolio[stock.getTicker()] += qty;
        cout<<"Successfully bought "<<qty <<"shares of "<<stock.getTicker()<<endl;
    }

    
}