#include <iostream>

using namespace std;

int main() {

    // swapping variables

        // int x = 10;
        // int y = 20;

        // x = x ^ y;
        // y = x ^ y;
        // x = x ^ y;

        // cout << "Variable X: " << x << endl;
        // cout << "Variable Y: " << y << endl;

    string operation;

    const int CAN_READ = 1;        // 0001
    const int CAN_WRITE = 1 << 1;  // 0010
    const int CAN_CREATE = 1 << 2; // 0100
    const int CAN_DELETE = 1 << 3; // 1000

    int user_role = CAN_READ | CAN_CREATE; // 0101

    while (operation != "exit" && operation != "EXIT") {

        cout << "What do you want to do? ";
        cin >> operation;

        if (operation == "READ") {
            if ((CAN_READ & user_role) == CAN_READ) { // 0001 & 0101 = 0001
                cout << "Reading file." << endl;
            } else {
                cout << "Read Permission Required!" << endl;
            }
        }
        if (operation == "WRITE") {
            if ((CAN_WRITE & user_role) == CAN_WRITE) { // 0010 & 0101 = 0000
                cout << "Writing text in the file." << endl;
            } else {
                cout << "Write Permission Required!" << endl;
            }
        }
        if (operation == "CREATE") {
            if ((CAN_CREATE & user_role) == CAN_CREATE) { // 0100 & 0101 = 0100
                cout << "Creating the file." << endl;
            } else {
                cout << "Create Permission Required!" << endl;
            }
        }
        if (operation == "DELETE") {
            if ((CAN_DELETE & user_role) == CAN_DELETE) { // 1000 & 0101 = 0000
                cout << "Deleting the file." << endl;
            } else {
                cout << "Delete Permission Required!" << endl;
            }
        }
    }

    return 0;
}