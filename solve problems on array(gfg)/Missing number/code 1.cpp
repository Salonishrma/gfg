//using sum of natural no
int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum_natural_no=(N*(N+1))/2;
    int sum=0;
    for(int i=0;i<N-1;i++){
        sum=sum+A[i];
    }
    return ( sum_natural_no - sum);
}
