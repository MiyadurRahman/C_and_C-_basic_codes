 #include <iostream>
 using namespace std;
 int main(){
int first=0,second=1;
int n;
int fibo,count=0;
cout<<"enter range: ";

cin>>n;
cout<<"fibonacci numbers are: ";
for(;count<n;count++)
{

if(count<=1)
{
fibo=count;


}
else{

fibo=first+second;
first=second;
second=fibo;
cout<<" "<<fibo<<endl;

}



}
cout<<"sum of the fibonacci numbers "<<fibo;
 }