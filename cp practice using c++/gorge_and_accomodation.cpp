#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int p,q;
    int count=0;
    while(t--){
        cin>>p >>q;
        if(p<q){
            if(abs(p-q)>1){

             count++;
            }
        }else{
            count=count+0;
        }

    }
    cout<<count;
    
}