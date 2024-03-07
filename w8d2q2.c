class MinStack {
public:
   MinStack() {
        
    }
    stack<pair<int,int>> s;
    int min1=INT_MAX;
    void push(int val) {
        min1 = min(min1,val);
        s.push(make_pair(val,min1));
    }
    void pop() {
         s.pop();
         if(!s.empty()) min1 = s.top().second;
         else min1 = INT_MAX;
    }
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
