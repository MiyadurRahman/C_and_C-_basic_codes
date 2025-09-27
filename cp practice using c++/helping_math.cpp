#include <iostream>
using namespace std;
int main()
{

    string input;
    cin >> input;
    string numbers = "";

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] != '+')
        {
            numbers = numbers + input[i];
        }
    }

    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = 0; j < numbers.size() - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        if (i != numbers.size() - 1)
        {
            cout << "+";
        }
    }
}