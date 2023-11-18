#include <iostream>

using namespace std;


int number = 42;

int main() {

    // pointer
    int *numberPt = &number;

    cout << "Pointer Memory Address (numberPt): " << numberPt << endl;
    cout << "Pointer Number (*numberPt): " << *numberPt << endl; // dereferencing operator *
    cout << "Pointer address-of operator (&numberPt): " << &numberPt << endl; // address of the pointer variable

    // reference
    int &numberRf = number;

    cout << "Reference Memory Address (&numberRf): " << &numberRf << endl; // address-of operator
    cout << "Reference Number (numberRf): " << numberRf << endl;

    ++number;

    // pointer
    cout << "Pointer Number (*numberPt): " << *numberPt << endl; // dereferencing operator *

    // reference
    cout << "Reference Number (numberRf): " << numberRf << endl;

    numberRf = 52; // or number = 52 or *numberPt = 52

    // pointer
    cout << "Pointer Number (*numberPt): " << *numberPt << endl; // dereferencing operator *

    // reference
    cout << "Reference Number (numberRf): " << numberRf << endl;

    return 0;
}
