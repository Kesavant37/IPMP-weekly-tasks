class Solution{
public:
    int countWays(string S1, string S2,int m,int n){
         
         vector<string>ans;
         ans.push_back("");
         long long int cnt=S1.size();
         for(int i=0;i<cnt;i++){
             long long int n=ans.size();
             for(int j=0;j<n;j++)
             ans.push_back(ans[j]+S1[i]);
                
         }
         int count=0;
         for(int i=0;i<ans.size();i++){
             if(ans[i]==S2)
               count++;
             
         }
         int m=1e9+7;
         int ccount=count%m;
         return ccount;
    }
};
