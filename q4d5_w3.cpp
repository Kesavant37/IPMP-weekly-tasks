vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0], end = intervals[0][1],
            n = intervals.size();
        vector<vector<int>> ans;

        for (int i = 1; i < n; i++) {
            if (end >= intervals[i][0])
                end = max(end, intervals[i][1]);
            else {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});
        return ans;
    }
