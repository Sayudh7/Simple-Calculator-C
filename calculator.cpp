#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

long long factorial(int n) {
    if (n < 0) return -1;
    if (n > 20) return -2; // overflow protection

    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n=================================\n";
        cout << "      SCIENTIFIC CALCULATOR\n";
        cout << "=================================\n";
        cout << "1  Add         9  Tan\n";
        cout << "2  Subtract   10  Exp\n";
        cout << "3  Multiply   11  Log\n";
        cout << "4  Divide     12  Factorial\n";
        cout << "5  Power      13  Abs\n";
        cout << "6  Sqrt       14  Log10\n";
        cout << "7  Sin        15  Percentage\n";
        cout << "8  Cos        16  Exit\n";
        cout << "=================================\n";
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
            if (b == 0)
                cout << "Error: Division by zero\n";
            else
                cout << "Result: " << a / b << endl;
            break;

        case 5:
            cin >> a >> b;
            cout << "Result: " << pow(a, b) << endl;
            break;

        case 6:
            cin >> a;
            if (a < 0)
                cout << "Error: Invalid input\n";
            else
                cout << "Result: " << sqrt(a) << endl;
            break;

        case 7:
            cin >> a;
            cout << "Result: " << sin(a * PI / 180) << endl;
            break;

        case 8:
            cin >> a;
            cout << "Result: " << cos(a * PI / 180) << endl;
            break;

        case 9:
            cin >> a;
            cout << "Result: " << tan(a * PI / 180) << endl;
            break;

        case 10:
            cin >> a;
            cout << "Result: " << exp(a) << endl;
            break;

        case 11:
            cin >> a;
            if (a <= 0)
                cout << "Error: Invalid input\n";
            else
                cout << "Result: " << log(a) << endl;
            break;

        case 12: {
            int n;
            cout << "Enter a non-negative integer: ";
            cin >> n;

            long long res = factorial(n);

            if (res == -1)
                cout << "Error: Negative input not allowed\n";
            else if (res == -2)
                cout << "Error: Overflow (n too large)\n";
            else
                cout << "Result: " << res << endl;

            break;
        }

        case 13:
            cin >> a;
            cout << "Result: " << fabs(a) << endl;
            break;

        case 14:
            cin >> a;
            if (a <= 0)
                cout << "Error: Invalid input\n";
            else
                cout << "Result: " << log10(a) << endl;
            break;

        case 15: {
            double obtained, total;
            cout << "Enter obtained value: ";
            cin >> obtained;
            cout << "Enter total value: ";
            cin >> total;

            if (total == 0)
                cout << "Error: Total cannot be zero\n";
            else
                cout << "Percentage: " << (obtained / total) * 100 << "%\n";

            break;
        }

        case 16:
            cout << "\nThank you for using the calculator!\n";
            break;

        default:
            cout << "Invalid option\n";
        }

    } while (choice != 16);

    return 0;
}
