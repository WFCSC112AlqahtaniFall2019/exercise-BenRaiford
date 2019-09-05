#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> revVector(8); // User values
    unsigned long i;                        // Loop index


    cout << "Enter " << revVector.size() << " integer values..." << endl;
    for (i = 0; i < revVector.size(); i++) {
        cin >> revVector.at(i);
    }

    // Reverse
    for (i = 0; i < revVector.size() / 2; i++) {// Swap
        int tempVar = revVector.at(i);
        revVector.at(i) = revVector.at(revVector.size() - 1 - i);
        revVector[revVector.size() - 1 - i] = tempVar;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < revVector.size(); i++) {
        cout << " " << revVector.at(i);
    }
    cout << endl;

    return 0;
}