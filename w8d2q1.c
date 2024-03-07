class Solution {
public:
    bool isValid(string s) {
         stack<int>stor;
    char a;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        stor.push(s[i]);
        else
        {
            if(stor.size()==0)return false;
            a=stor.top();
            
             if(s[i]=='}'&&a=='{')
            {
                stor.pop();
                //continue;
                }
            else if (s[i]==')'&&a=='('){
                stor.pop();
                //continue;
                }
            else if (s[i]==']'&&a=='['){
                stor.pop();
                //continue;
                }
            else return false;
 
        }

    }
    if(stor.size()==0)return true;
    return false;
        
        
    }
};
