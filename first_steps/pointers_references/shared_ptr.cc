#include <iostream>
#include <memory>

using namespace std;


class MyClass {
public:
    MyClass() { cout << "Constructor is called." << endl; };
    ~MyClass() { cout << "Destructor is called." << endl; };
};

void example1() {
    // create a shared memory to manage the MyClass Object
    std::shared_ptr<MyClass> ptr1(new MyClass());

    {
        // create another shared pointer and initialize it with the previously created pointer
        std::shared_ptr<MyClass> ptr2 = ptr1;

        cout << "Inside the inner scope." << endl;
        // both pointers share the same objet, and the reference counter has been increased to 2
    }

    cout << "Outside the inner scope." << endl;

    // leaving the inner scope will destroy ptr2, and the reference counter is decremented to 1

    // the main function returns, ptr1 goes out of scope, and the reference counter becomes 0
    // this causes the MyClass object to be deleted and the destructor is called
};

void example2() {

    std::shared_ptr<int> ptr1(new int(42));
    std::shared_ptr<int> ptr2 = ptr1;

    cout << "Value (ptr1): " << *ptr1 << endl;
    cout << "Value (ptr2): " << *ptr2 << endl;
    cout << "Memory Address (ptr1): " << ptr1 << endl;
    cout << "Memory Address (ptr2): " << ptr2 << endl;

};


void example3() {

    std::shared_ptr<int[]> ptr1(new int[10]);

}


int main() {

    example2();

}