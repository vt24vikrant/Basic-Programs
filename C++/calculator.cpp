#include <iostream>
using namespace std;

void single() {
    unsigned int a, b;
    char m;
    cout << "Enter the type of process that you want to do (+, -, *, /): ";
    cin >> m;

    switch (m) {
        case '+': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a + b << endl;
            break;
        }
        case '*': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a * b << endl;
            break;
        }
        case '-': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a - b << endl;
            break;
        }
        case '/': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            if (b == 0)
                cout << "Error: Division by zero is undefined." << endl;
            else
                cout << "The result is: " << a / b << endl;
            break;
        }
        default: {
            cout << "Invalid operation." << endl;
            break;
        }
    }
}

void multi() {
    float a, b;
    char m;
    cout << "Enter the type of process that you want to do (+, -, *, /): ";
    cin >> m;

    switch (m) {
        case '+': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a + b << endl;
            break;
        }
        case '*': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a * b << endl;
            break;
        }
        case '-': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result is: " << a - b << endl;
            break;
        }
        case '/': {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            if (b == 0)
                cout << "Error: Division by zero is undefined." << endl;
            else
                cout << "The result is: " << a / b << endl;
            break;
        }
        default: {
            cout << "Invalid operation." << endl;
            break;
        }
    }
}

int main() {
    char value;
    cout << "------------WELCOME!!!!------------" << endl;
    cout << "What type of process would you like to do?" << endl;
    cout << "1) Press (a) for non-decimal operations" << endl;
    cout << "2) Press (b) for decimal operations (can be done for positive values only)" << endl;
    cin >> value;

    if (value == 'a') {
        single();
    } else if (value == 'b') {
        multi();
    } else {
        cout << "You have entered a wrong value." << endl;
    }

    return 0;
}
