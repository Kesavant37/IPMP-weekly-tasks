

long long int longestSubarry(long long int A[], long long int N) {
    long long int cnt=0;
    long long int tmpcnt=0;
    for(long long int i=0;i<N;i++){
        if(A[i]>=0)
          tmpcnt++;
        else{
            if(tmpcnt>cnt)
               cnt=tmpcnt;
            tmpcnt=0;
        }
    }
    cnt=max(cnt,tmpcnt);
    return cnt;
    
    
}
