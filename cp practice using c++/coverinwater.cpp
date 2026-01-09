#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        string str;
        getchar();
        getline(cin, str);
 
        int dotCount = 0, three = 0, maxDot = 0;
 
        for (int i = 0; i < n; i++)
        {
            if(str[i] == '.')
            {
                dotCount++;  
            }
 
            if (str[i] == '#')
            {
                
                three = 0;
            }
            else three++;
            maxDot = max(three, maxDot);
        }
 
        if(maxDot >= 3) cout << 2 << endl;
        else cout << dotCount << endl;
        
 
 
    }
    
    return 0;
}