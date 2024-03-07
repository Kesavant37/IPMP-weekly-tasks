class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) {
            return 0;
        }

        int cols = matrix[0].size();
        int maxArea = 0, curr_area = 0;

        vector<int> heights(cols, 0);

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            stack<int> st;

            for (int j = 0; j <= cols; j++) {
                while (!st.empty() &&
                       (j == cols || heights[j] <= heights[st.top()])) {
                    int top = heights[st.top()];
                    st.pop();
                    int breadth = st.empty() ? j : j - st.top() - 1;

                    curr_area = max(curr_area, top * breadth);
                }
                st.push(j);
            }
            maxArea = max(maxArea, curr_area);
        }

        return maxArea;
    }
};
