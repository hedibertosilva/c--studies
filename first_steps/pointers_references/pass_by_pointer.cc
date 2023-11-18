#include <iostream>

using namespace std;


void square(int*);

int main() {
    int number = 8;

    cout <<  "In main(): " << &number << endl;   // original mem address
    cout << number << endl;                      // 8
    square(&number);
    cout << number << endl;                      // 64

    return 0;
}

// int* pNumber = &number;
// int *pNumber = &number;
// int * pNumber = &number;

void square(int *pNumber) {                      // function takes an int pointer
    cout << "In square(): " << pNumber << endl;  // original mem address
    *pNumber *= *pNumber;
}