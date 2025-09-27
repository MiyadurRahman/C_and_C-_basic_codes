#include <iostream>
using namespace std;
int main(){

int  w;
cin>>w;

if(w>=1 && w<=100)
{
    if(w==1 || w==2){
        cout<<"no";
        return 0;
    }
if(w%2==0)
{
    cout<<"yes"<<endl;

}
else
{
    cout<<"no";
}
}

}


