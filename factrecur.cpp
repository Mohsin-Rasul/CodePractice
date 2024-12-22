#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int num;
    cout << "Enter a integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        int result = factorial(num);
        cout << "The factorial of " << num << " is: " << result << endl;
    }
    return 0;
}