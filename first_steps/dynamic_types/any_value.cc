#include <iostream>
#include <any>

using namespace std;


int main() {

    std::any var1;

    var1 = 42;

    cout << "Any Value: " << any_cast<int>(var1) << endl;

    return 0;
}