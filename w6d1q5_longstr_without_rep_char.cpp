class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,n=s.size();
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=0){
                cnt=max(cnt,i-low);
                for(int j=low;j<i;j++){
                    if(s[i]==s[j]){
                        low=j+1;
                        mp[s[j]]--;
                        break;
                    }
                     mp[s[j]]--;
                }
            }
            mp[s[i]]++;
        }
        cnt=max(cnt,n-low);
        return cnt;
    }
};
