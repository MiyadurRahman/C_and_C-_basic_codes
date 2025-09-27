#include <iostream>
using namespace std;
int main(){
int k,n,w;

int sum=0;
cin>>k>>n>>w;

for(int i=1;i<=w;i++)

{
   sum+=i*k;
}
if((sum<=n))
{
    sum=0;
    cout<<sum;

}else{
cout<<sum-n;
}
}