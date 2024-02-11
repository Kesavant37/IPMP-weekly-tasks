class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mp;
        int ec=0,flag=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto itr = mp.begin(); itr!=mp.end();itr++){
            if((itr->second)%2==0){
                ec+=itr->second;
            }
            else if((itr->second)%2==1 && (itr->second)/2!=0){
                ec+=(itr->second-1);
                flag=1;
            }
            else if((itr->second)%2==1 && (itr->second)/2==0 && flag==0){
               
               flag=1;
            }

        }
        if(flag==1) return (ec+1);
        return ec;
    }
};
