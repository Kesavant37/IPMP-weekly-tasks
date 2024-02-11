class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
        unordered_map<int,int>mp;
        int sum=0,cnt=0;
        int temp;
        int maxlen=0;
        int n=A.size();
        for(int i=0;i<n;i++){
            sum+=A[i];
            
            temp=sum-k;
            if(sum==k){
                cnt++;
            }
            if(mp.find(temp)!=mp.end()){
                cnt+=mp[temp];
            }
            
            mp[sum]++;
            
        }
        //if(sum==0)return n;
        return cnt;
        
    }
};
