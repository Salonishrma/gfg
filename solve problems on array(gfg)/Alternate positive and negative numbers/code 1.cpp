//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	vector<int>pos;
	vector<int>neg;
	for(int i=0;i<n;i++){
	    if(arr[i]>=0){
	        pos.push_back(arr[i]);
	    }
	    else{
	        neg.push_back(arr[i]);
	    }
	}
    int p1=pos.size();
    int n1=neg.size();
    if(p1<n1){
        for(int i=0;i<p1;i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=p1*2;
        for(int i=p1;i<n1;i++){
            arr[index]=neg[i];
            index++;
        }
    }
    else{
        for(int i=0;i<n1;i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=n1*2;
        for(int i=n1;i<p1;i++){
            arr[index]=pos[i];
            index++;
        }
    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
