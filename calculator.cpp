#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n[ SCIENTIFIC CALCULATOR ]\n";
        cout << "---------------------------\n";
        cout << "1  Add        7  Sin\n";
        cout << "2  Subtract   8  Cos\n";
        cout << "3  Multiply   9  Tan\n";
        cout << "4  Divide     10 Exp\n";
        cout << "5  Power      11 Log\n";
        cout << "6  Sqrt       12 Exit\n";
        cout << "---------------------------\n";
        cout << "Select option: ";
        cin >> choice;

        cout << "\n";

        switch (choice) {

            case 1:
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;

            case 2:
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;

            case 3:
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;

            case 4:
                cin >> a >> b;
                cout << (b != 0 ? "Result: " + to_string(a / b) : "Error: div by 0") << endl;
                break;

            case 5:
                cin >> a >> b;
                cout << "Result: " << pow(a, b) << endl;
                break;

            case 6:
                cin >> a;
                cout << "Result: " << sqrt(a) << endl;
                break;

            case 7:
                cin >> a;
                cout << "Result: " << sin(a * M_PI / 180) << endl;
                break;

            case 8:
                cin >> a;
                cout << "Result: " << cos(a * M_PI / 180) << endl;
                break;

            case 9:
                cin >> a;
                cout << "Result: " << tan(a * M_PI / 180) << endl;
                break;

            case 10:
                cin >> a;
                cout << "Result: " << exp(a) << endl;
                break;

            case 11:
                cin >> a;
                cout << "Result: " << log(a) << endl;
                break;

            case 12:
                cout << "Bye 👋\n";
                break;

            default:
                cout << "Invalid option\n";
        }

    } while (choice != 12);

    return 0;
}
