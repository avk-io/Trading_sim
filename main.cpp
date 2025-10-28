#include "Stock.h"
#include "Trader.h"
#include <iostream>
using namespace std;

int main() {
    Trader trader("Jack", 10000);

    Stock google("Google Inc", "GOOG", 280.00);
    Stock apple("Apple Inc", "APPL", 310.00);
    Stock microsoft("Microsoft", "MS", 220.43);
    Stock openai("OpenAI", "OAI", 230.65);
    Stock janest("Jane_St", "JST", 354.95);

    trader.buyStock(google, 8);
    trader.buyStock(apple, 5);
    trader.buyStock(microsoft, 12);
    trader.buyStock(openai, 7);
    trader.buyStock(janest, 3);

    trader.buyStock(microsoft, 91); 

    trader.sellStock(microsoft, 9); 
    trader.sellStock(janest, 5);    
    trader.sellStock(google, 3);    

    cout << "\nAbout to display portfolio...\n";
    trader.displayPortfolio();

    cout << "\nAbout to display transaction history...\n";
    trader.displayTransactionhistory();

    return 0;
}
