//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
  {
      int maxlength=0;
      int sum=0;
      map<long long,int>m1;
      for(int i=0;i<N;i++){
          sum=sum+A[i];
          if(sum==K)
           maxlength=max(maxlength,i+1);
           int rem=sum-K;
           if(m1.find(rem)!=m1.end()){
               int len=i-m1[rem];
               maxlength=max(maxlength,len);
           }
           if(m1.find(sum)==m1.end()){
               m1[sum]=i;
           }
      }
      return maxlength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
