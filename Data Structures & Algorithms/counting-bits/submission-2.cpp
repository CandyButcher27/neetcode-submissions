class Solution {
public:
    vector<int> countBits(int n) {
        // Pre-allocate memory to avoid reallocations
        vector<int> ans(n + 1);
        
        for(int i = 0; i <= n; i++) {
            // Uses hardware-level POPCNT instruction
            ans[i] = __builtin_popcount(i);
        }
        
        return ans;
    }
};