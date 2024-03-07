class MyQueue {
public:
    stack<int>spush;
    stack<int>spop;
    MyQueue() {
        
    }
    
    void push(int x) {
        spush.push(x);
    }
    
    int pop() {
        if(!spop.empty()){
            int top=spop.top();
            spop.pop();
            return top;
        }
        while(!spush.empty()){
            spop.push(spush.top());
            spush.pop();
        }
        int top=spop.top();
        spop.pop();
        return top;
    }
    
    int peek() {
        if(!spop.empty()){
            return spop.top();
        }
        while(!spush.empty()){
            spop.push(spush.top());
            spush.pop();
        }
        return spop.top();
    }
    
    bool empty() {
        if(spop.empty() && spush.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
