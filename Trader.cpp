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

        history.push_back({"Bought",stock.getTicker(),qty,stock.getPrice()});
    }
}

    void Trader::sellStock(Stock &stock,int qty){
        if(portfolio[stock.getTicker()]<qty){
            cout<<"Not enough shares to sell "<<qty<<" shares of "<<stock.getTicker()<<endl;
            
        }
        else{
            double revenue = stock.getPrice()*qty;
            balance += revenue;
            portfolio[stock.getTicker()] -= qty;
            cout<<"Successfully sold "<<qty<<" shares of "<<stock.getTicker()<<endl;
            history.push_back({"SOLD",stock.getTicker(),qty,stock.getPrice()});

        }

    }

    void Trader::displayPortfolio() const{
        cout<<"Portfolio of "<<name<<"/\\/"<<endl;
        for(auto const it:portfolio){
            cout<<it.first<<"-->"<<it.second<<endl;
        }
        cout<<"Balance: "<<"$"<<balance<<endl;


    }

    void Trader::displayTransactionhistory() const{
            cout<<"----Transaction History-----"<<endl;
            for(auto &t : history){
                cout<<t.type<< " | "<<t.stockName<<" | "<<t.quantity<<" | "<<t.price<<endl;
            }
    }

   
  
  

    
