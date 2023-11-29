#include <iostream>
#include <memory>


void simple_raw_pointers() {
    std::string* myName = new std::string;
    *myName = "Hediberto";

    std::cout << "Simple Example: " << *myName << std::endl;

    delete myName;
};


void array_raw_pointers() {
    int* arr = new int[10];

    for (int i=0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    std::cout << "Array Exemple: " << std::endl;

    for (int n = sizeof(arr) + 1; n >= 0; n--) {
        std::cout << "\tArray Element (" << n << "): " << arr[n] << std::endl;
    }

    delete[] arr;

};


int main() {

    simple_raw_pointers();
    array_raw_pointers();

    return 0;
}