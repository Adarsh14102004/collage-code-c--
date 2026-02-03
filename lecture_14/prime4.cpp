#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter number: ";
    cin >> n;

    for (int i = n; i > 0; i = i / 10) {
        int digit = i % 10;   // last digit
        rev = rev * 10 + digit;
    }

    cout << "Reverse = " << rev;
    return 0;
}
