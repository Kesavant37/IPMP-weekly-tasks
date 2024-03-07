class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        map<int, int> m;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() < nums2[i])
                st.pop();

            if (!st.empty()) {
                m[nums2[i]] = st.top();
            } else {
                m[nums2[i]] = -1;
            }

            st.push(nums2[i]);
        }
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++) {
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};
