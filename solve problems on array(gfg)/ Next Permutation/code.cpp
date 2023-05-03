//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = N- 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = N- 1; i > ind; i--) {
        // As we know all the values after 'ind' are sorted in descending order,
        // so we can simply traverse from the end to the begining 
    //to get the value which is greater than ind but smaller than the remaining values.
    // Then we can swap them. 
    //and we must break out of the loop.
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:

// After that the 
//remaining array will be revesed to get the 
//next permutation
    reverse(arr.begin() + ind + 1, arr.end());
       return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
