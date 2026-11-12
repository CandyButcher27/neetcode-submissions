class Solution {
public:
    int numberof1(int n){
        int count = 0;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0){  //shifting the number 1 left by i positions
                count++;
            }
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.emplace_back(numberof1(i));
        }
        return ans;
    }
};
