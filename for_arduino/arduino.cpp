
#include <iostream>
using namespace std;

// Function 1: Print numbers 1 to 10
void printNumbers() {
    cout << "\nNumbers 1 to 10:\n";

    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
}

// Function 2: Check if a number is even or odd
void checkEvenOdd() {
    int number;

    cout << "\nEnter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is Even.\n";
    } else {
        cout << number << " is Odd.\n";
    }
}

// Function 3: Greet function
void greet() {
    cout << "\nHello Arduino!\n";
}

// Function 4: Print array values
void printArray() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "\nArray values:\n";

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }
}

// Function 5: Toggle ON and OFF
void toggleState() {
    bool state = true;

    cout << "\nToggling ON and OFF:\n";

    for (int i = 0; i < 6; i++) {
        if (state == true) {
            cout << "ON" << endl;
        } else {
            cout << "OFF" << endl;
        }

        state = !state;
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n===== PROGRAM MENU =====\n";
        cout << "1. Print numbers 1 to 10\n";
        cout << "2. Check Even or Odd\n";
        cout << "3. Greet (Hello Arduino!)\n";
        cout << "4. Print Array Values\n";
        cout << "5. Toggle ON and OFF\n";
        cout << "0. Exit Program\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printNumbers();
                break;

            case 2:
                checkEvenOdd();
                break;

            case 3:
                greet();
                break;

            case 4:
                printArray();
                break;

            case 5:
                toggleState();
                break;

            case 0:
                cout << "\nExiting program. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
