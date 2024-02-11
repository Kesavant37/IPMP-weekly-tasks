 long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long int i=0,j=m-1,diff=INT_MAX,tempdiff;
    long long int start=a[i];
    long long int end=a[j];
    while(j<=n-1){
        tempdiff=(end-start);
        diff=min(diff,tempdiff);
        i++;
        j++;
        start=a[i];
        end=a[j];
   
    }
    return diff;
    
    
    }  
