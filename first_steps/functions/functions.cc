#include <iostream>

using namespace std;

/**
 * Calculates the sum of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 *
 * @return The sum of the two integers.
 *
 * @throws None
 */
int sum(int a, int b) {
    return a + b;
}

/**
 *  Calculates the difference of two integers.
 *
 *  @param a The first integer.
 *  @param b The second integer.
 *
 *  @return The difference of the two integers.
 *
 *  @throws None
 */
int diff(int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    const int c = 10, d = 5;
    const string string1 = "This is a constant.";

    a = b = 1;

    int resultSum = sum(a, b);
    int resultDiff = diff(c, d);

    cout << "1 + 1 = " << resultSum << endl;
    cout << "10 - 5 = " << resultDiff << endl;

    return 0;
}
