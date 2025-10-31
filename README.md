CLI Trading Simulator

A lightweight command-line trading simulator written in C++.
It handles basic trading operations — buying, selling, and tracking a portfolio — built as an early step toward more complex trading and financial simulation systems.

Repository: https://github.com/avk-io/Trading_sim

Features

Add and manage stocks with price data

Buy and sell using a simulated balance

Track portfolio value and holdings

Simple and extendable architecture (Trader, Stock, Market classes)

Project Structure
cpp_project/
│
├── main.cpp              # Entry point  
├── Stock.cpp / Stock.h   # Stock class (name, ticker, price)
├── Trader.cpp / Trader.h # Trader class (buy/sell, portfolio handling)
├── mainexe.exe           # Compiled executable  
└── .vscode/settings.json # Editor config

How to Run
g++ main.cpp Stock.cpp Trader.cpp -o trading_sim
./trading_sim

Future Plans

Live price simulation

Portfolio save/load system

Integrate with API for real-time date

Command-line menu for better interaction

Author: avk-io (Caliz)

Just the foundation — sharpening the blade before the real build.