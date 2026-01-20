#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    if (n >= 300 && n <= 460) {
        cout << "You won a MacBook!\n";

        if (n >= 300 && n <= 380) {
            cout << "Model: M1 Mac";
        }
        else if (n >= 381 && n <= 460) {
            cout << "Model: M2 Mac";
        }
    }

    else if (n >= 200 && n <= 280) {
        cout << "You won a pack of Kurkura!\n";

        if (n >= 200 && n <= 240) {
            cout << "Flavor: Chilli Kurkura";
        }
        else if (n >= 241 && n <= 280) {
            cout << "Flavor: Onion Kurkura";
        }
    }

    else if (n >= 1100 && n <= 1500) {
        cout << "You won a Cycle!\n";

        if (n >= 1100 && n <= 1300) {
            cout << "Brand: Avon Cycle";
        }
        else if (n >= 1301 && n <= 1500) {
            cout << "Brand: Hero Cycle";
        }
    }

    else if (n >= 50 && n <= 80) {
        cout << "You won a Bike!\n";

        if (n >= 50 && n <= 65) {
            cout << "Model: Bullet";
        }
        else if (n >= 66 && n <= 80) {
            cout << "Model: Rajdoot";
        }
    }

    else {
        cout << "Better luck next time";
    }

    return 0;
}
