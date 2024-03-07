string postToInfix(string s) {
    // Write your code here.
    stack<string> st;
    string ans;
    for(int i=0;i<s.size();i++){
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')){
            st.push(string(1,s[i]));
        }else{
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            string temp='('+s2+s[i]+s1+')';
            st.push(temp);
        }
    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    return ans;
}
