class Solution {
public:
    int maxLen(vector<int>& arr) {
        unordered_map<int,int> m;
        int sum = 0, ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (!sum) ans = i + 1;
            else if (m.count(sum)) ans = max(ans, i - m[sum]);
            else m[sum] = i;
        }
        return ans;
    }
};
