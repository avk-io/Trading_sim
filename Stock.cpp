#include "Stock.h"


 Stock::Stock(string n,string t,double p){
    name = n;
     ticker = t;
     price = p;
 }

void Stock::updatePrice(double newPrice){
     price = newPrice;
    }
    
void Stock::displayInfo() const{
    cout<<"Stock: "<<name<<"||"<<ticker<<"||"<<"$"<<price<<endl;
    }

string Stock::getTicker() const { return ticker; }
 double Stock::getPrice() const { return price; }

