vector<int> findTwoElement(vector<int> arr, int n) {
        long long int orig=0;
        long long int dup=0;
        for(int i=1;i<=n;i++)
          orig+=(i*i);
        for(int i=0;i<n;i++)
           dup+=(arr[i]*arr[i]);
        int flag=0;
        
        long long int orig1=0;
        long long int dup1=0;
        for(int i=1;i<=n;i++)
          orig1+=(i);
        for(int i=0;i<n;i++)
           dup1+=(arr[i]);
        
        long long int y=-dup+orig;
        
        long long int x=-dup1+orig1;
        long long int z=y/x;
        vector<int>ans;
      
        ans.push_back((z-x)/2);
        ans.push_back((z+x)/2);
        
       
        return ans;
        
