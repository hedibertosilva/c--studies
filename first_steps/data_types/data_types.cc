#include <iostream>

using namespace std;


int main() {


    short int numberShotInt = 1;
    int numberInt = 2;
    long int numberLongInt = 3;
    long long int numberLongLongInt = 4;

    cout << "numberShotInt: " << numberShotInt << endl;
    cout << "numberInt: " << numberInt << endl;
    cout << "numberLongInt: " << numberLongInt << endl;
    cout << "numberLongLongInt: " << numberLongLongInt << endl;

    printf("sizeof(numberShotInt) = %d bytes\n", sizeof(numberShotInt));
    printf("sizeof(numberInt) = %d bytes\n", sizeof(numberInt));
    printf("sizeof(numberLongInt) = %d bytes\n", sizeof(numberLongInt));
    printf("sizeof(numberLongLongInt) = %d bytes\n", sizeof(numberLongLongInt));

    float pi = 3.14f;

    cout << "pi: " << pi << endl;

    double pi_high_precision = 3.1415926535;

    cout << "pi: " << pi_high_precision << endl;

    return 0;
}