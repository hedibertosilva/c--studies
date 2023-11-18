#include <iostream>

using namespace std;

int main() {

    // creating for and initializing i internally
    for (int i=0; i < 10; i++) {
        cout << "Test A: " << i << endl;
    }

    // creating for and initializing i externally
    int x;
    for (x=10; x > 0; --x) {
        cout << "Test B: " << x << endl;
    }

    int y = 10;
    while (y > 5) {
        cout << "While Test: " << y << endl;
        --y;
    }

    int z = 10;
    do {
        cout << "Do Test: " << z << endl;
        z--;
    } while (z > 10);

    int condition = 0;
    switch (condition) {
        case 1:
            cout << "This is true." << endl;
            break;
        case 0:
            cout << "This is false." << endl;
            break;
        default:
            cout << "This is default." << endl;
            break;
    }

    return 0;
}