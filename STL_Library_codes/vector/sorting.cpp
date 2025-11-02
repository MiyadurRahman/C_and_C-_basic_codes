#include <iostream>
using  namespace std;
#include<algorithm>
#include<vector>
int main(){

    vector<int>vec;
   /* process:1 to sort the elements in the vector
    int n,element;
    cout<<"Enter the number of elements to be inserted in vector:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        vec.push_back(element);
    }
    sort(vec.begin(),vec.end());// sorting in ascending order
    cout<<"The sorted elements in ascending order are:"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;*/

    // process:2 to sort the elements in the vector in descending order
    vector<int>vec2;
    int n,element;
    cout<<"Enter the number of elements to be inserted in vector:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        vec2.push_back(element);
    }
    sort(vec2.begin(),vec2.end(),greater<int>());// sorting in descending order
    cout<<"The sorted elements in descending order are:"<<endl;
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }
}