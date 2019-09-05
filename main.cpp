#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVector[8];               // User values
    int i;                        // Loop index


    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; i++) {
        cin >> revVector[i];
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS / 2; i++) {// Swap
        int tempVar = revVector[i];
        revVector[i] = revVector[NUM_ELEMENTS - 1 - i];
        revVector[NUM_ELEMENTS - 1 - i] = tempVar;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; i++) {
        cout << " " << revVector[i];
    }
    cout << endl;

    return 0;
}