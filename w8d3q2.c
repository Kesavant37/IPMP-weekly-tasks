#include<bits/stdc++.h>
string prefixToInfixConversion(string &s)
{
    stack<string> st;
    string result;
    for(int i=s.length()-1;i>=0;i--)
    {
        char c = s[i];
        if(c=='*' || c=='/' || c=='+' || c=='-')
        {
            string str1 = st.top();st.pop();
            string str2 = st.top();st.pop();
            result = "(" + str1 + c + str2 + ")";
            st.push(result);
        }
        else
        {
            st.push(string(1,c));
        }
    }
    return result;
}
