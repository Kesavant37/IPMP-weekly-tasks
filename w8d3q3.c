string preToPost(string s) {
    stack<string> st;
    string ans;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='A' && s[i]<='Z'){
            st.push(string(1,s[i]));
        }else{
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            string temp=s1+s2+s[i];
            st.push(temp);
        }
    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    return ans;
}
