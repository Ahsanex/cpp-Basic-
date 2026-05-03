#include <iostream>
#include <string>

void showResult(const std::string& result);

class Calculator {
public:
    void run() {
        double first = 0.0;
        double second = 0.0;
        char op = '+';

        std::cout << "Enter first number: ";
        std::cin >> first;

        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;

        std::cout << "Enter second number: ";
        std::cin >> second;

        std::string message = calculate(first, op, second);
        showResult(message);
    }

private:
    std::string calculate(double first, char op, double second) {
        if (op == '+') {
            return std::to_string(first) + " + " + std::to_string(second) + " = " + std::to_string(first + second);
        }
        if (op == '-') {
            return std::to_string(first) + " - " + std::to_string(second) + " = " + std::to_string(first - second);
        }
        if (op == '*') {
            return std::to_string(first) + " * " + std::to_string(second) + " = " + std::to_string(first * second);
        }
        if (op == '/') {
            if (second == 0) {
                return "ERROR: Division by zero is not allowed.";
            }
            return std::to_string(first) + " / " + std::to_string(second) + " = " + std::to_string(first / second);
        }
        return "ERROR: Unsupported operator.";
    }
};

int main() {
    Calculator app;
    app.run();
    return 0;
}
