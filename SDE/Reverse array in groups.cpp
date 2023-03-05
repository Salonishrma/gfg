class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long>& arr,int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
           int j=0;
           int remainder=n%k;
        if(n<k){
            reverse(arr,0,n-1);
        }
        else{
            for(int i=0;i<n/k;i++){
                reverse(arr,j,j+k-1);
                j=j+k;
            }
        if(n%k!=0){
            reverse(arr,n-remainder,n-1);
        }
        }
            }

    
};
