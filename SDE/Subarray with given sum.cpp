class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
       
        int start=0,i;
        int sum=arr[0];
        vector<int>x;
        for(int i=1;i<=n;i++){
           while(sum>s && start<i-1){
                sum=sum-arr[start];
                start++;
            }
          if(sum==s){
              return {start+1,i};
          }
          if(i<n)
           sum=sum+arr[i];
    }
    
    return{-1};
    }
};
