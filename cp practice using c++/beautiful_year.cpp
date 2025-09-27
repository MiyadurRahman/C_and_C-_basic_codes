#include <iostream>
using namespace std;
int main(){
int year;
int i,j;
cin>>year;
year++;
string year1=to_string(year);
for( i=0;i<year1.size();i++);
{
for( j=0;j<year1.size();j++)
{
if(year1[i]==year1[j+1])
{
 break;

}
else{
    cout<<year1;
}



}



}



}