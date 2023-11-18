#include <iostream>

using namespace std;

int main() {

    int c;

    cout << "Enter a valid number: ";
    cin >> c;

    if (c == 1) {
        cout << "Equal to 1." << endl;
    } else if (c == 3) {
        cout << "Equal to 3." << endl;
    } else {
        cout << "Random number." << endl;
    }

    return 0;
}
