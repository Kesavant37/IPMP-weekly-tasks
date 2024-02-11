class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int sum=0;
        int temp;
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            
            temp=sum-0;
            if(sum==0){
                maxlen=max(maxlen,i+1);
            }
            if(mp.find(temp)!=mp.end()){
                maxlen=max(maxlen,i-mp[temp]);
            }
            if(mp.find(sum)==mp.end()){
            mp[sum]=i;
            }
        }
        //if(sum==0)return n;
        return maxlen;
    }
