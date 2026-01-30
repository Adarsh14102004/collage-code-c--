#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // size of pattern (odd number)

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {

            // Border condition
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            }
            // Center condition
            else if (i == n/2 && j == n/2) {
                cout << "@ ";
            }
            // Middle area
            else {
                cout << "# ";
            }
        }
        cout << endl;
    }

    return 0;
}
