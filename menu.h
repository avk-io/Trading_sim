#include "Stock.h"
#include "Trader.h"

void menu(Trader& trader,vector<Stock>& stocks)
{
    int choice;
    do{
        cout<<"1.View Portfolio"<<endl;
        cout<<"2.View Stock"<<endl;
        cout<<"3.Buy Stock"<<endl;
        cout <<"4.Sell Stock"<<endl;
        cout<<"5.View Transaction"<<endl;   
        cout<<"6.Exit"<<endl;

         cout<<"Enter a choice: ";
        cin>>choice;
        int stk;
        int qty;

        switch(choice){
        case 1:
           trader.displayPortfolio();
            break;
        case 2:
            for(int i = 0;i<stocks.size();i++){
                cout<<i+1<<".";
                stocks[i].displayInfo();
            }
            break;
        case 3:
            for (int i = 0; i < stocks.size(); i++) {
                  cout << i + 1 << ". ";
                 stocks[i].displayInfo();
                }

                 cin>>stk>>qty;
                 trader.buyStock(stocks[stk-1],qty);
                break;
        case 4:
        for(int i = 0;i<stocks.size();i++){
            cout<<i+1<<".";
            stocks[i].displayInfo();
        }
            cout<<"Enter the stock name and quantity"<<endl;
            cin>>stk>>qty;
            trader.sellStock(stocks[stk-1],qty);
            break;
        case 5:
            trader.displayTransactionhistory();
            break;
        case 6:
            cout<<"Exiting Program...."<<endl;
            break;
    }
    }while (choice!=6);
    
    
}