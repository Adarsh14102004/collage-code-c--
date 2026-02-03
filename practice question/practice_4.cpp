#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;

    for (int i = 0; i < n; i++) {

        // spaces
        if (i == 1 || i == 3) {
            cout << "  ";
        }
        if (i == 2) {
            cout << "    ";
        }

        // numbers
        if (i == 0 || i == 4){
            cout << "2 3 5 7 11";
        }
        else if (i == 1 || i == 3)
        {
            cout << "13 17";
        }
        else{
            cout << "19";
        }
        cout << endl;
    }

    return 0;
}
