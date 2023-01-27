#include <iostream>
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
    double num1, num2, result;
    char operation;
    int iterations;
    string exit;

    while (true) {
        cout << "Enter the first number: ";
        cin >> num1;

        while (true) {
            cout << "\nEnter the second number: ";
            cin >> num2;
            cout << "Enter the operation (+, -, *, /, %, f): ";
                cin >> operation;
            while (!(operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%' || operation == 'f')) {
                cout << "Wrong operation. Write again: ";
                cin >> operation;
            }

            if (num2 != 0 || operation != '/') {
                break;
            }
            cout << "You can divide on zero";
        }

        switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = (int)num1 % (int)num2;
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
        if (exit != "Yes") {
            break;
        }
    }

    return 0;
}
