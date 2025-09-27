#include <iostream>
using namespace std;
int main(){
int stops,in,out;
cin>>stops;
int total=0;
int add[stops];
for(int i=0;i<stops;i++)
{

cin>>in>>out;
total+=in;
total-=out;
if(total <0){
    total=0;
}
add[i]=total;
// if(in==0){
// total=in+out;
// }
// if(in>0)
// {
//     total=total-in+out;
// }
// add[i]=total;

}

int max=add[0];
for(int i=0;i<stops;i++)
if(max<add[i]){
    max=add[i];

}
cout<<max;


}