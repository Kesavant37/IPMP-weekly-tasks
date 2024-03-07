class Solution {
public:
    vector<int> prevSmallerElement(vector<int>& input) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());
        for (int i = 0; i < input.size(); i++) {
            int curr = input[i];
            while (s.top() != -1 && input[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> nextSmaller(vector<int>& input) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());
        for (int i = input.size() - 1; i >= 0; i--) {
            int curr = input[i];
            while (s.top() != -1 && input[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev = prevSmallerElement(heights);
        vector<int> next = nextSmaller(heights);

        int maxArea = INT_MIN;
        int size = heights.size();

        for (int i = 0; i < heights.size(); i++) {
            int length = heights[i];

            if (next[i] == -1) {
                next[i] = size;
            }

            int width = next[i] - prev[i] - 1;

            int area = length * width;

            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
