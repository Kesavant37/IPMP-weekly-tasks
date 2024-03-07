class BrowserHistory {
    vector<string> v;
    int p;
public:
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        p = 0;
    }
    
    void visit(string url) {
        int n = v.size();
        for(int i=0; i<n-p-1; i++) v.pop_back();
        v.push_back(url);
        p++;
    }
    
    string back(int steps) {
        return v[max(0, p - steps)];
    }
    
    string forward(int steps) {
        return v[min((int)v.size() - 1, p + steps)];
    }
};
// leetcode google facebook linkedin

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
