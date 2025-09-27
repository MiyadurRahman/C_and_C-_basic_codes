#include <iostream>
using namespace std;

int main() {
    int n, row, col;
    
    cout << "Enter an odd number (>=5): ";
    cin >> n;

    // Check if n is odd and at least 5
    if (n < 5 || n % 2 == 0) {
        cout << "Please enter an odd number greater than or equal to 5." << endl;
        return 1;
    }

    // Loop to print the pattern of '2'
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (row == 1 ||                        // Top horizontal line
                row == (n/2)+1 ||              // Middle horizontal line
                row == n ||                        // Bottom horizontal line
                (row < (n / 2) + 1 && col == n) || // Upper right vertical line
                (row > (n / 2) + 1 && col == 1))   // Lower left vertical line
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
