//              1
//            2   2
//          3       3
//        4           4
//          3       3
//            2   2
//              1
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Print left number
        cout << i;
        // Print middle spaces
        if (i != 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
                cout << "  ";
            }
            // Print right number
            cout << i;
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Print left number
        cout << i;
        // Print middle spaces
        if (i != 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
                cout << "  ";
            }
            // Print right number
            cout << i;
        }
        cout << endl;
    }

    return 0;
}