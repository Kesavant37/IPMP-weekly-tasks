class Solution 
{
    public:
    int check(int A[], int N,int mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<N;i++){
        if(sum+A[i]>mid){
            cnt++;
            sum=A[i];
        }
        else
          sum+=A[i];
        }
        return cnt;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int low=*max_element(A,A+N);
        int high=accumulate(A,A+N,0);
        int mid,ans;
        if(N<M)return -1;
        while(low<=high){
            mid=(low+high)/2;
            if(check(A,N,mid)>M)
               low=mid+1;
            else if(check(A,N,mid)<=M)
              high=mid-1;
            //else 
               
        }
        return low;
    }
