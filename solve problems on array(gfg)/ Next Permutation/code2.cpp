
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
       next_permutation(arr.begin(),arr.end());
       return arr;
    }
};
