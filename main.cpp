#include "Stock.h"
#include "Trader.h"
#include <iostream>
#include "menu.h"
#include "Portfolio.h"
using namespace std;

int main() {
  Trader t("Jack",10000);
  Stock google("Google","GGL",298);
  Stock apple("apple","appl",321);

  t.buyStock(google, 5);
  t.buyStock(apple, 2);
  t.displayPortfolio();
  t.displayTransactionHistory();

}

