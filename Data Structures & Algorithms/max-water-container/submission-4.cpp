class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int area = 0;
        int maxarea = 0;
        while(left<right){
            area = (right-left)*min(heights[right],heights[left]);
            maxarea = max(area,maxarea);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};
