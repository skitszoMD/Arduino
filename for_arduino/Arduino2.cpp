
#include <cstdio>

// Function 1: Print numbers 1 to 10
void printNumbers() {
    std::printf("\nNumbers 1 to 10:\n");

    for (int i = 1; i <= 10; i++) {
        std::printf("%d\n", i);
    }
}

// Function 2: Check if a number is even or odd
void checkEvenOdd() {
    int number;

    std::printf("\nEnter a number: ");
    std::scanf("%d", &number);

    if (number % 2 == 0) {
        std::printf("%d is Even.\n", number);
    } else {
        std::printf("%d is Odd.\n", number);
    }
}

// Function 3: Greet function
void greet() {
    std::printf("\nHello Arduino!\n");
}

// Function 4: Print array values
void printArray() {
    int numbers[5] = {10, 20, 30, 40, 50};

    std::printf("\nArray values:\n");

    for (int i = 0; i < 5; i++) {
        std::printf("%d\n", numbers[i]);
    }
}

// Function 5: Toggle ON and OFF
void toggleState() {
    bool state = true;

    std::printf("\nToggling ON and OFF:\n");

    for (int i = 0; i < 6; i++) {
        if (state == true) {
            std::printf("ON\n");
        } else {
            std::printf("OFF\n");
        }

        state = !state;
    }
}

// Main function
int main() {
    int choice;

    do {
        std::printf("\n===== PROGRAM MENU =====\n");
        std::printf("1. Print numbers 1 to 10\n");
        std::printf("2. Check Even or Odd\n");
        std::printf("3. Greet (Hello Arduino!)\n");
        std::printf("4. Print Array Values\n");
        std::printf("5. Toggle ON and OFF\n");
        std::printf("0. Exit Program\n");

        std::printf("\nEnter your choice: ");
        std::scanf("%d", &choice);

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
                std::printf("\nExiting program. Goodbye!\n");
                break;

            default:
                std::printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
