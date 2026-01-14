#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    bool hard = false;
    while (t--)
    {

        cin >> n;

        if (n == 1)
        {
            hard = true;
        
        }
    }

if (hard)
{
    cout << "HARD";
}
else{
    cout<<"EASY";
}
}
