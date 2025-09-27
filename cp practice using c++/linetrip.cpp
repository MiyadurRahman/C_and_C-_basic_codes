#include <iostream>
#include <vector>
using namespace std;
int dif;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        vector<int> n1(n+2);  
           n1[0]=0;
        n1[n+1]=x;
        for (int j = 1; j <= n; j++)
        {
            cin >> n1[j];
        }
         dif=0;
        for (int j = 1; j <= n+1; j++){
         int gap =n1[j]-n1[j-1];
         if(dif<gap)
         {
            dif=gap;
         }
         
        }
         if (dif < 2 * (x - n1[n])) 
         {dif = 2 * (x - n1[n]);
         }
        cout<<dif<<endl;
    }
}