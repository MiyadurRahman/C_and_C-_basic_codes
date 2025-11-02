#include <iostream>
using  namespace std;
#include<vector>
#include <algorithm>
int main(){
    vector<int>vec{1,2,3,4,5};
    vector<int>:: iterator it=vec.begin();
    it=vec.insert(it,10);//insert returns iterator to the inserted element
  
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
cout<<endl;
    vec.insert(it+1,20);//he iterator it (which originally pointed to vec.begin()) is invalidated because the vector might have reallocated memory internally.

      for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}