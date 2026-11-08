class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i:nums){
            sum+=i;
        }
        int n = nums.size();
        int total = n*(n+1)/2;
        int missing_num = total-sum;
        return missing_num;
    }
};
