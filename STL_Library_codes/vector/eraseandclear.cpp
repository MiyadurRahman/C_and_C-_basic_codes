#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
vector<int> vec{1, 2, 3, 4, 5};
vec.erase(vec.begin() + 2); // Erase the element at index 2 (the third element)
for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
}
string str = "HELLO WORLD";
str.erase(str.begin()+3);// Erase the character at index 3
cout << endl << str;

// Avoid using it for large string/vector as memory runtime error
 //may occur
 vec.clear(); // Clear all elements from the vector
 cout << endl << "Size after clear: " << vec.size();    
}