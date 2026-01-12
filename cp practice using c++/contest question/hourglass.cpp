#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int s,k,m;
    cin>>s>>k>>m;
    int numofflips=m/k;
    int left_min=m%k;
       int time;
    if(numofflips %2==0){
        time=s-min(s,left_min);

    }
    else{
        int odd_flips=min(s,k);
        time=s-min(odd_flips,left_min);

    }
    cout<<time<<'\n';



    }
}