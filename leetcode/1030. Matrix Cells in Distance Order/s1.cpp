// OJ: https://leetcode.com/problems/matrix-cells-in-distance-order/
// Author: github.com/punkfulw
// Reference: https://leetcode.com/problems/matrix-cells-in-distance-order/discuss/346351/Simple-C%2B%2B-Solution
// Time: O(RC)
// Space: O(1)
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> ans;
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                ans.push_back({i, j, abs(i - r0) + abs(j - c0)});

        sort(ans.begin(), ans.end(), [](vector<int>& c1, vector<int>& c2) {
            return c1[2] < c2[2];
        });

        for (vector<int>& d: ans) 
            d.pop_back();

        return ans;
    }
};
