#include <iostream>
#include <algorithm>
#include <vector>
using  namespace std;

int main(){
    vector<int>vec;
   /* process:1 to find an element in the vector
    int n,element;
    cout<<"Enter the number of elements to be inserted in vector:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        vec.push_back(element);
    }
    cout<<"Enter the element to be found in the vector:"<<endl;
    int findelement;
    cin>>findelement;
    bool found=false;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==findelement){
            found=true;
            cout<<"Element "<<findelement<<" found at index "<<i<<endl;
            break;
        }
    }
    if(!found){
        cout<<"Element "<<findelement<<" not found in the vector."<<endl;
    }
    return 0;*/

    // process:2 to find an element in the vector using STL algorithm
    vector<int>vec2;
    int n,element;
    cout<<"Enter the number of elements to be inserted in vector:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        vec2.push_back(element);
    }
    vector<int>:: iterator it;// iterator to point to elements in the vector
int searchelement;
cin>>searchelement;
it=find(vec2.begin(),vec2.end(),searchelement);
if(it==vec2.end()){//std::find only returns vec.end() when it fails to find the element.
    cout<<"Element "<<searchelement<<" not found in the vector."<<endl;
}
else{
    cout<<"Element "<<searchelement<<" found at index "<<it-vec2.begin()<<endl;//
}//If you subtract two iterators (it - vec.begin()), the result is the number of steps (or elements) between them. This gives you the index of the element that the iterator it points to.
}//he element you searched for. You can calculate the index of that element by subtracting vec.begin() (iterator pointing to the first element) from it (iterator pointing to the found element).