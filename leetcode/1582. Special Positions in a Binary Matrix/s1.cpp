// OJ: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
// Author: github.com/punkfulw
// Time: O(MN)
// Space: O(M + N)
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int ans = 0;
        vector<int> row(n), col(m);
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mat[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (mat[i][j] == 1 && col[j] == 1 && row[i] == 1)
                    ans++;

        return ans;
    }
};
