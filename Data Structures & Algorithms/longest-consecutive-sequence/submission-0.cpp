class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int longest_count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                count++;
            }
            else if(nums[i]-nums[i-1]>1){
                longest_count = max(longest_count , count);
                count = 1;
            }
        }
        longest_count = max(count,longest_count);
        return longest_count;
    }
};
