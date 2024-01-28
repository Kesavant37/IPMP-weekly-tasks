class Solution {
public:
    map<int,string>map1;
    string ans = ""; 
    void solve(int idx,string &digits,vector<string> &v){
        if(idx >= digits.size()){ 
            v.push_back(ans);
            return;
        }    
        int num = digits[idx]-'0'; 
        string s =map1[num]; 
        for(int i=0;i<s.size();i++){
            ans += s[i]; 
            solve(idx+1,digits,v); 
            ans.pop_back(); 
        }
    }
    vector<string> letterCombinations(string digits) {
    map1[2] = {"abc"}; 
    map1[3] = {"def"};
    map1[4] = {"ghi"};
    map1[5] = {"jkl"};
    map1[6] = {"mno"};
    map1[7] = {"pqrs"};
    map1[8] = {"tuv"};
    map1[9] = {"wxyz"};
        vector<string> v;
        if(digits.size() == 0)
            return v;
        solve(0,digits,v);
        return v;
    }
};
