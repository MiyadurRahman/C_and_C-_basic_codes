#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int n1[n];
        for (int j = 0; j < n; j++)
        {
            cin >> n1[j];
        }
    
     if (k == 1)
     {
        int sorted = 1; 
        for (int j = 1; j < n; j++)
        {
            if (n1[j] < n1[j - 1])
            {
                sorted = 0;
                break;
            }
        }
            if(sorted==1){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        
     }
     else{
        cout<<"YES"<<endl;
     }
    }
}

