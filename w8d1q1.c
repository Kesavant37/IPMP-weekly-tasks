class MyStack {
private:
    queue<int> first, second;
public:
    MyStack() {  
    }
    void push(int x) {
        first.push(x);
    }
    int pop() {
        while(first.size() != 1){
            second.push(first.front());
            first.pop();
        }
        int res = first.front();
        first.pop();
        while(!second.empty()){
            first.push(second.front());
            second.pop();
        }
        return res;
    }
    int top() {
        while(first.size() != 1){
            second.push(first.front());
            first.pop();
        }
        int res = first.front();
        first.pop();
        second.push(res);
        while(!second.empty()){
            first.push(second.front());
            second.pop();
        }
        return res;
    }
    bool empty() {
        return first.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
