#include <iostream>
#include <memory>


using namespace std;

struct MyDeleter {
    void operator()(int *ptr) {
        cout << "Custom Delete: Deleting pointer" << endl;
        delete ptr;
    };
};


int main() {

    // Creating unique_ptr

    string myName = "Hediberto";

    std::unique_ptr<int> p1(new int(5));
    std::unique_ptr<string> p2 = std::make_unique<string>(myName); // Prefered method (C++ 14 onwards)

    cout << "Value p1: " << *p1 << endl;
    cout << "Value p2: " << *p2 << endl;

    // Tranfering ownership

    std::unique_ptr<int> p3 = std::move(p1);

    cout << "Value p2: " << *p2 << endl;
    cout << "Value p3: " << *p3 << endl;
    // cout << "Value p1: " << *p1 << endl; // Falha de segmentação

    // Custom Deleter

    std::unique_ptr<int, MyDeleter> p4(new int(10), MyDeleter());

    cout << "Value p4: " << *p4 << endl;

    // Random Test

    string *test_ptr = &myName;

    cout << "Value test_ptr: " << *test_ptr << endl;
    cout << "Value test_ptr menaddr: " << test_ptr << endl;
    cout << "Value test_ptr menaddr: " << &p2 << endl;

    cout << "Before the scope ends" << endl;

    return 0;
}