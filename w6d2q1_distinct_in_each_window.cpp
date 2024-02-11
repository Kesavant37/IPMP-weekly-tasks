class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        map<int,int>mp;
        vector<int>ans;
        int low=0,cnt,k1=0;
        while(k1<k){
             mp[A[k1]]++;
             k1++;
        }
        while(low+k<=n){
            
            cnt=mp.size();
            ans.push_back(cnt);
            if(mp[A[low]]==1)mp.erase(A[low]);
            else --mp[A[low]];
            low+=1;
            mp[A[low+k-1]]++;
            
        }
        return ans;
    }
    
};
