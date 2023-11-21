#include <iostream>

using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
};

int main() {

    int x = 3, y = 4;
    cout << "Original: x=" << x << ", y=" << y << endl;
    swap(x, y);
    cout << "Swap: x=" << x << ", y=" << y << endl;

    return 0;
}