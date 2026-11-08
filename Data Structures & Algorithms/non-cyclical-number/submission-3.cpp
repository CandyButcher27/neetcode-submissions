class Solution {
public:
    int squareoutput(int n){
        int num;
        int ans = 0;
        while(n!=0){
        num = n%10;
        n = n/10;
        ans += num*num;            
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>sset;
        while(sset.find(n)==sset.end()){
            //while the number has not yet been repeated

            if(n==1){
                return true;
            }
            sset.insert(n);
            n = squareoutput(n);
        }
        return false;
    }
};
