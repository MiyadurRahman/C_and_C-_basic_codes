#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string r = "";
     int i = s.size()-1; 
     do{
    
        r += s[i];
        i--;
    
   
  }while(i > -1);
   string t;
   cin>>t;
   if (r==t)
   {
    cout<< "YES";

   }
   else
   {
    cout<< "NO";
   }
    return 0;
}