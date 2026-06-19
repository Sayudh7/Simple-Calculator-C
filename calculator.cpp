#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

#define RESET  "\033[0m"
#define BOLD   "\033[1m"
#define CYAN   "\033[36m"
#define GREEN  "\033[32m"
#define RED    "\033[31m"
#define YELLOW "\033[33m"

long long factorial(int n) {
    if (n < 0)  return -1;
    if (n > 20) return -2;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n" << CYAN << BOLD;
        cout << "=================================\n";
        cout << "      SCIENTIFIC CALCULATOR      \n";
        cout << "=================================\n" << RESET;

        cout << GREEN;
        cout << " 1  Add         9  Tan\n";
        cout << " 2  Subtract   10  Exp\n";
        cout << " 3  Multiply   11  Log\n";
        cout << " 4  Divide     12  Factorial\n";
        cout << " 5  Power      13  Abs\n";
        cout << " 6  Sqrt       14  Log10\n";
        cout << " 7  Sin        15  Percentage\n";
        cout << " 8  Cos        16  Exit\n";
        cout << RESET;

        cout << CYAN << "=================================\n" << RESET;
        cout << BOLD << "Select option: " << RESET;
        cin >> choice;

        cout << "\n";

        switch (choice) {

        case 1:
            cout << YELLOW << "Enter two numbers: " << RESET;
            cin >> a >> b;
            cout << GREEN << "Result: " << a + b << RESET << "\n";
            break;

        case 2:
            cout << YELLOW << "Enter two numbers: " << RESET;
            cin >> a >> b;
            cout << GREEN << "Result: " << a - b << RESET << "\n";
            break;

        case 3:
            cout << YELLOW << "Enter two numbers: " << RESET;
            cin >> a >> b;
            cout << GREEN << "Result: " << a * b << RESET << "\n";
            break;

        case 4:
            cout << YELLOW << "Enter two numbers: " << RESET;
            cin >> a >> b;
            if (b == 0)
                cout << RED << "Error: Division by zero\n" << RESET;
            else
                cout << GREEN << "Result: " << a / b << RESET << "\n";
            break;

        case 5:
            cout << YELLOW << "Enter base and exponent: " << RESET;
            cin >> a >> b;
            cout << GREEN << "Result: " << pow(a, b) << RESET << "\n";
            break;

        case 6:
            cout << YELLOW << "Enter number: " << RESET;
            cin >> a;
            if (a < 0)
                cout << RED << "Error: Invalid input\n" << RESET;
            else
                cout << GREEN << "Result: " << sqrt(a) << RESET << "\n";
            break;

        case 7:
            cout << YELLOW << "Enter angle (degrees): " << RESET;
            cin >> a;
            cout << GREEN << "Result: " << sin(a * PI / 180) << RESET << "\n";
            break;

        case 8:
            cout << YELLOW << "Enter angle (degrees): " << RESET;
            cin >> a;
            cout << GREEN << "Result: " << cos(a * PI / 180) << RESET << "\n";
            break;

        case 9:
            cout << YELLOW << "Enter angle (degrees): " << RESET;
            cin >> a;
            cout << GREEN << "Result: " << tan(a * PI / 180) << RESET << "\n";
            break;

        case 10:
            cout << YELLOW << "Enter number: " << RESET;
            cin >> a;
            cout << GREEN << "Result: " << exp(a) << RESET << "\n";
            break;

        case 11:
            cout << YELLOW << "Enter number: " << RESET;
            cin >> a;
            if (a <= 0)
                cout << RED << "Error: Invalid input\n" << RESET;
            else
                cout << GREEN << "Result: " << log(a) << RESET << "\n";
            break;

        case 12: {
            int n;
            cout << YELLOW << "Enter a non-negative integer: " << RESET;
            cin >> n;
            long long res = factorial(n);
            if (res == -1)
                cout << RED << "Error: Negative input not allowed\n" << RESET;
            else if (res == -2)
                cout << RED << "Error: Overflow (n too large)\n" << RESET;
            else
                cout << GREEN << "Result: " << res << RESET << "\n";
            break;
        }

        case 13:
            cout << YELLOW << "Enter number: " << RESET;
            cin >> a;
            cout << GREEN << "Result: " << fabs(a) << RESET << "\n";
            break;

        case 14:
            cout << YELLOW << "Enter number: " << RESET;
            cin >> a;
            if (a <= 0)
                cout << RED << "Error: Invalid input\n" << RESET;
            else
                cout << GREEN << "Result: " << log10(a) << RESET << "\n";
            break;

        case 15: {
            double obtained, total;
            cout << YELLOW << "Enter obtained value: " << RESET;
            cin >> obtained;
            cout << YELLOW << "Enter total value: " << RESET;
            cin >> total;
            if (total == 0)
                cout << RED << "Error: Total cannot be zero\n" << RESET;
            else
                cout << GREEN << "Percentage: " << (obtained / total) * 100 << "%" << RESET << "\n";
            break;
        }

        case 16:
            cout << CYAN << BOLD << "\nThank you for using the calculator!\n" << RESET;
            break;

        default:
            cout << RED << "Invalid option\n" << RESET;
        }

    } while (choice != 16);

    return 0;
}
