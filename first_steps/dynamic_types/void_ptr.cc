#include <iostream>


int main() {

    void *void_ptr;

    int num = 42;

    void_ptr = &num;

    std::cout << "Ptr: " << *static_cast<int*>(void_ptr) << std::endl;

    std::string str = "text";

    void_ptr = &str;

    std::cout << "Ptr: " << *static_cast<std::string*>(void_ptr) << std::endl;

    bool boolean = true;

    void_ptr = &boolean;

    std::cout << "Ptr: " << *static_cast<bool*>(void_ptr) << std::endl;

    return 0;

}
