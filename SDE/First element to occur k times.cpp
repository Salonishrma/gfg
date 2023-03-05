class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
      map<int,int>m1;
      for(int i=0;i<n;i++){
          m1[a[i]]++;
          if(m1[a[i]]==k){
                return a[i];
            }
        }
        return -1;
      }
};
