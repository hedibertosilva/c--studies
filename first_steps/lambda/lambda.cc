#include <iostream>

using namespace std;

/*
 *
 * auto var1 = [capture-list](parameters) -> return_type {
 *      // function body
 * };
 *
 */

auto printHello = []() {
    cout << "Hello World!" << endl;
};

int main() {

    printHello();

    int sum, c = 3;
    auto add = [&sum, c](int a, int b) {
        sum = a + b + c;
    };

    add(3, 4);

    cout << "3 + 4 = " << sum << endl;

    auto mult = [](int a, int b) -> int {
        return a * b;
    };

    int times = mult(3, 4);

    cout << "3 * 4 = " << times << endl;

    return 0;
}
