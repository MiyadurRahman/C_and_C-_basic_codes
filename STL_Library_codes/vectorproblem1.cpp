// User function Template for C++
// Given an array arr[] of size n containing integers. The task is to insert elements of given array to vector in same order as in arr  and return that vector.

// Examples :

// Input: n = 4, arr[] = [1, 2, 3, 4]
// Output: 1, 2, 3, 4. elements are inserted in the vector. 

#include <iostream>
using  namespace std;
#include<vector>
/*
arr: insert the given array elements to vector
n: size of array
*/
vector<int> fillVector(int arr[], int n) {
    vector <int> v;
    for(int i=0 ; i<n; i++)
    {
        v.push_back(arr[i]);
        
    }
    return v;
    
    
}
int main() {
    int n = 4;
    int arr[] = {1, 2, 3, 4};

    // ✅ pass just 'arr', not 'arr[]'
    vector<int> finalresult = fillVector(arr, n);

    // ✅ use finalresult.size() instead of arr.size()
    for (int i = 0; i < finalresult.size(); i++) {
        cout << finalresult[i] << " ";
    }

    return 0;
}
    
    
    
    

