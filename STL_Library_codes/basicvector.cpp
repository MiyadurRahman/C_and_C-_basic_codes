#include <iostream>
using namespace std;
#include <vector>
void display (vector<int> &v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}
}
int main(){
    vector <int> v2(4); // vector of size 4
    vector <int> v3(v2); // vector created from another vector v2
vector<int> v;
int element;
cout<<"Enter the elements to be inserted in vector"<<endl;
for(int i=1;i<=5;i++){
    cin>>element;
    v.push_back(element);
}
cout<<"The elements in the vector are:"<<endl;
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// v.pop_back();// removes last element from the vector
// display(v);
vector <int> :: iterator iter = v.begin();
v.insert(iter,100);// inserts 100 at the beginning
v.insert(iter+2,200);// inserts 200 at index 2
v.insert(iter+1,300);// inserts 300 at index 1
display(v);
return 0;
}