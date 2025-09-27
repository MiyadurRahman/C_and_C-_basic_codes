#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
   
    int row;
    int col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ( arr[i][j]==1 )
            {
                row = i;
                col = j;
            }
        }
    }
     cout << abs(row - 2) + abs(col - 2) << endl;
}