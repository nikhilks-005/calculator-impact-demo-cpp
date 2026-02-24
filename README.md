# Calculator Impact Demo (C++)

A simple calculator application demonstrating MCP integration.

## Project Structure
├── app/
│ └── main.cpp # Main entry point
├── operations/
│ ├── Add.cpp/h # Addition operation
│ ├── Subtract.cpp/h # Subtraction operation
│ ├── Multiply.cpp/h # Multiplication operation
│ └── Divide.cpp/h # Division operation
├── services/
│ ├── CalculatorService.cpp/h # Main calculator service
│ └── functions.cpp # Helper functions
└── utils/
└── Logger.cpp/h # Logging utilities

text


## Building

```bash
g++ -o calculator app/main.cpp operations/*.cpp services/*.cpp utils/*.cpp
Usage
Bash

./calculator
Features
Addition
Subtraction
Multiplication
Division
Logging support