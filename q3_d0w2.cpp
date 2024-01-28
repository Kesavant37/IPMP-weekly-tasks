class Solution {
public:
    vector<int> countBits(int n) {
        int ct;
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ct=0;
            for(int j=0;j<=(log(i)/log(2));j++){
                if(((1<<j)&i) != 0)
                   ct++;
            }
            ans.push_back(ct);
        }
        return ans;
        
    }
};
