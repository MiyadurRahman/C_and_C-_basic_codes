#include <iostream>
using namespace std;
int main(){

int n,n1,n2,n3;
int count=0;
cin>>n;//for lines
for(int i=0;i<n;i++)
{
cin>>n1>>n2>>n3;

int sum=0;
sum=n1+n2+n3;
if( sum==2 || sum==3)
{
    count++;
}

}
cout<<count<<endl;



}