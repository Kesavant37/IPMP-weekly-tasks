class Solution {
public:
    string reverseWords(string s) {
        string s1="";
        vector<string>ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                s1+=s[i];
            }
            else {
                if(s1!="")
                ans.push_back(s1);
                s1="";
            }   
        }
        if(s1!="") ans.push_back(s1);

        string ans1="";
        for(int i=ans.size()-1;i>=0;i--){
            ans1+=ans[i];
            if(i!=0)
            ans1+=" ";
        }
        
        return ans1;
    }
};
