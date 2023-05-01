#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
   int left=0;
   int right=0;
   long long sum=A[0];
   int maxlength=0;
   while(right<N){
       while(left<=right && sum>K) //array of sum ki value jb greater thi k ki value s 
       // then hm subtract krenge array ke element ko left side se
       sum=sum-A[left];
       left++;
   }
   if(sum==K){
       maxlength =max(maxlength,right-left+1);
   }
   right++;
   if(right<N){
       sum=sum+A[right];
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
