// OJ: https://leetcode.com/problems/latest-time-by-replacing-hidden-digits/
// Author: github.com/punkfulw
// Time: O(1)
// Space: O(1)
class Solution {
public:
    string maximumTime(string time) {
        if (time[1] == '?'){
            if (time[0] == '?' || time[0] == '2')
                time[1] = '3';
            else
                time[1] = '9';
        }
        if (time[0] == '?'){
            if (time[1] <= '3')
                time[0] = '2';
            else
                time[0] = '1';
        }
        if (time[4] == '?') time[4] = '9';
        if (time[3] == '?') time[3] = '5'; 
        
        return time;
    }
};
