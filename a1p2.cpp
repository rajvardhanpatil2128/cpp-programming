#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "----- MENU -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (choice)
    {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;

        case 5:
            cout << "Result = " << (int)num1 % (int)num2 << endl;
            break;

        case 6:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}