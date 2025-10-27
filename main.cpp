#include "Stock.h"
#include <iostream>
using namespace std;

int main() {
    Stock google("Google Inc", "GOOG", 2800.00);
    google.displayInfo();
    return 0;
}
