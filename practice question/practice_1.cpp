#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // n should be an odd number, e.g. 5

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Border stars
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            }
            // Center symbol
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
