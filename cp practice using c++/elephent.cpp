#include <iostream>
using namespace std;
int main(){
int location;
cin>>location;
int minimum;
if(location%5==0)
{
minimum=location/5;

}
 if(location%4==0){
    minimum=location/4;
}
 if(location%3==0){

    minimum=location/3;

}
 if(location%2==0){

    minimum=location/2;
}
else{
    minimum=location/1;

}
cout<<minimum;


}