class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
       int min=-1;
       vector<int>v1;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i]>=min) {
            v1.push_back(a[i]);
        }
        min=max(min,a[i]);
    }
  reverse(v1.begin(),v1.end());
  return v1;
}


};
