#include <iostream>
using namespace std;

int main(){
int n1,k;
int count=0;
cin>>n1>>k;
int a[n1];
for(int i=0;i<n1;i++)
{
cin >> a[i];
}
for(int i=0;i<n1;i++){
if(a[k-1]<= a[i] && a[i]>0 )
{
count++;

}

}
cout<<count;

}