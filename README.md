# CLI Trading Simulator

A lightweight command-line trading simulator written in C++.

This project mimics basic trading operations like **buying, selling, and tracking a portfolio** of stocks — designed as a stepping stone toward more complex financial simulation systems.

🔗 **[View Repository](https://github.com/avk-io/Trading_sim)**

---

## 🧠 Features
- Add and manage stocks with price data  
- Buy and sell stocks from a simulated balance  
- View portfolio with total value and holdings  
- Extendable architecture (Trader, Stock, Market classes)

---

## ⚙️ Project Structure
cpp_project/
│
├── main.cpp # Entry point
├── Stock.cpp / Stock.h # Stock class (name, ticker, price)
├── Trader.cpp / Trader.h # Trader class (buy/sell, display portfolio)
├── mainexe.exe # Compiled executable
└── .vscode/settings.json # Editor config

yaml
Copy code

---

## 🚀 How to Run
```bash
g++ main.cpp Stock.cpp Trader.cpp -o trading_sim
./trading_sim

🔮 Future Plans
Live price simulation

Persistent data storage (save/load portfolio)

Integration with APIs for real-time data

Command-line menu for easier interaction

🧑‍💻 Author
avk-io (Caliz)

“Pretty basic stuff <><> — just sharpening the blade.”

