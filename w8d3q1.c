#include <bits/stdc++.h>

int prec(char ch){
    if(ch == '^') return 3;
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return -1;
}




string infixToPostfix(string s){
    string ans = "";
    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            ans += ch;
        }

        else if (ch == '(') {
            st.push(ch);
        }

        else if (ch == ')') {
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
       else {
           while(!st.empty() && prec(ch) <= prec(st.top())){
                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while(!st.empty()){
    ans += st.top();
    st.pop();

    }

    return ans;

}


