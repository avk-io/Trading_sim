#include "Stock.h"
#include "Trader.h"
#include <iostream>
using namespace std;

int main() {

    Trader trader("Jack",10000);

    Stock google("Google Inc", "GOOG", 280.00);
    Stock apple("Apple Inc","APPL",310.00);
    Stock microsoft("MicroSoft","MS",220.43);
    Stock openai("OpenAI","OAI",230.65);
    Stock janest("Jane_St","JST",354.95);

    // google.displayInfo();
    // openai.displayInfo();
    // microsoft.displayInfo();
    // apple.displayInfo();
    // janest.displayInfo();

    trader.buyStock(google,8);
    trader.buyStock(apple,5);
    trader.buyStock(microsoft,12);
    trader.buyStock(openai,7);
    trader.buyStock(janest,3);

    trader.buyStock(microsoft,91);


    trader.sellStock(microsoft,9);

    cout<<"About to display portfolio..."<<endl;
    trader.displayPortfolio();
    return 0;

}
