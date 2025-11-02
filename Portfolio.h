#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <map>
#include <iostream>
using namespace std;

template <typename T>
class Portfolio{
    map<string,int> holdings;

public:
    void buy(const T& asset, int qty){
        holdings[asset.getTicker()] += qty;
    }

    void sell(const T& asset, int qty){
        string t = asset.getTicker();
        if(holdings.count(t)&&holdings[t]>=qty){
            holdings[t] -= qty;
        }
        else{
            cout<<"NOt enough holdings...."<<endl;
        }

    }
    void display() const{
        cout<<"----Portfolio-----"<<endl;
        for(const auto &p : holdings){
            cout<<p.first<<" -> "<<p.second<<"units"<<endl;
        }
    }
};
#endif