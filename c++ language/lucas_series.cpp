#include <iostream>
using namespace std;

int main()
{
    int first = 2, second = 1, lucas, n, sum = 0;

    cout << "Enter range: ";
    cin >> n;

    cout << "Lucas numbers: ";

    for (int count = 0; count < n; count++)
    {
        if (count == 0)
        {
            lucas = first;
        }
        else if (count == 1)
        {
            lucas = second;
        }
        else
        {
            lucas = first + second;
            first = second;
            second = lucas;
        }

        cout << lucas << " ";  // Print each Lucas number
        sum += lucas;          // Sum of Lucas numbers
    }

    cout << "\nSum of the Lucas numbers: " << sum << endl;
    return 0;
}