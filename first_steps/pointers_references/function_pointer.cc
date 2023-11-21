#include <iostream>

using namespace std;

int add(int x, int y) {
    return x + y;
};

int main() {

    int (*funcptr) (int, int) = add; // now funcptr points to add

    cout << "Result: " << funcptr(2, 2) << endl; // result 4

    return 0;
};