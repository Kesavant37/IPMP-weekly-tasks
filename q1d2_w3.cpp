 int trap(vector<int>& height) {
        int n=height.size();
        int pre[n];
        int suf[n];
        int max=height[0];
        pre[0]=max;
        for(int i=1;i<n;i++)
        {
            if(height[i]>=max){
              pre[i]=height[i];
              max=pre[i];
            }
            else 
              pre[i]=max;
        }
        max=height[n-1];
        suf[n-1]=max;
        for(int i=n-2;i>=0;i--){
            if(height[i]>max){
                suf[i]=height[i];
                max=suf[i];
            }
            else
              suf[i]=max;
        }
        int temp;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            temp=min(pre[i],suf[i]);
            if(temp>height[i])
               sum+=(temp-height[i]);
              
            
        }
        return sum;

