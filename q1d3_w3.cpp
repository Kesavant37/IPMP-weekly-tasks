int maxOnes(int a[], int n)
    {
        int max1=INT_MIN;
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)
              cnt++;
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                sum+=1;
                max1=max(sum,max1);
            }
            else{
                sum-=1;
                max1=max(sum,max1);
                if(sum<0)
                  sum=0;
            }
            
        }
        if(max1<=0)
          return cnt;
        return max1+cnt;
        
    }
