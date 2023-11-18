#include <iostream>

using namespace std;

int square(int);

int main() {
    int number = 8;
    cout << "In main(): " << &number << endl; // mem address
    cout << number << endl;                   // 8
    cout << square(number) << endl;           // 64
    cout << number << endl;                   // 8

    return 0;
}

int square(int n) {
    cout << "In square(): " << &n << endl;    // clone mem address
    n *= n;                                   // clone modified inside the function
    return n;
}