#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void generateFibonacci(int iterations) {
    int first = 0, second = 1, next;
    for (int i = 0; i < iterations; i++) {
        if (i <= 1) {
            next = i;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << ", ";
    }
}

int main() {
    string num1, num2;
    double result, result1, result2; //кароче result1 и result2 это такие классные вещи, которые как бы num1 и num2, но int!!!
    char operation;
    int iterations;
    string exit;

    while (true) {
        cout << "Enter the first number: ";
        cin >> num1;
        result1 = std::stod(num1);

        while (true) {
            cout << "\nEnter the second number: ";
            cin >> num2;
            result2 = std::stod(num2);
            cout << "Enter the operation (+, -, *, /, %, f): ";
                cin >> operation;
            while (!(operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%' || operation == 'f')) {
                cout << "Wrong operation. Write again: ";
                cin >> operation;
            }

            if (result1 != 0 || operation != '/') {
                break;
            }
            cout << "You can divide on zero";
        }

        switch (operation) {
        case '+':
            result = result1 + result2;
            break;
        case '-':
            result = result1 - result2;
            break;
        case '*':
            result = result1 * result2;
            break;
        case '/':
            result = result1 / result2;
            break;
        case '%':
            result = (int)result1 % (int)result2;
            break;
        case 'f':
            while (true) {
                cout << "Enter the number of iterations: ";
                cin >> iterations;
                if (iterations > 0) {
                    break;
                }
                cout << "Invalid input. Please enter a positive number." << endl;
            }
            generateFibonacci(iterations);
            break;
        }

        if (operation != 'f') cout << "The result is: " << result << endl;

        cout << "Do you want continue? Yes/No : ";
        cin >> exit;
        if (exit != "Yes" && exit != "yes") {
            
            break;
        }
            system("cls");
    }

    return 0;
}

