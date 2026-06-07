#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n===== SCIENTIFIC CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power (a^b)\n";
        cout << "6. Square root\n";
        cout << "7. Sin (degrees)\n";
        cout << "8. Cos (degrees)\n";
        cout << "9. Tan (degrees)\n";
        cout << "10. Exponential (e^x)\n";
        cout << "11. Natural Log (ln x)\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;

            case 5:
                cout << "Enter base and power: ";
                cin >> a >> b;
                cout << "Result = " << pow(a, b) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> a;
                if (a >= 0)
                    cout << "Result = " << sqrt(a) << endl;
                else
                    cout << "Error: Negative number!\n";
                break;

            case 7:
                cout << "Enter angle (degrees): ";
                cin >> a;
                cout << "Result = " << sin(a * M_PI / 180) << endl;
                break;

            case 8:
                cout << "Enter angle (degrees): ";
                cin >> a;
                cout << "Result = " << cos(a * M_PI / 180) << endl;
                break;

            case 9:
                cout << "Enter angle (degrees): ";
                cin >> a;
                cout << "Result = " << tan(a * M_PI / 180) << endl;
                break;

            case 10:
                cout << "Enter number: ";
                cin >> a;
                cout << "Result = " << exp(a) << endl;
                break;

            case 11:
                cout << "Enter number: ";
                cin >> a;
                if (a > 0)
                    cout << "Result = " << log(a) << endl;
                else
                    cout << "Error: log undefined for <= 0\n";
                break;

            case 12:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 12);

    return 0;
}