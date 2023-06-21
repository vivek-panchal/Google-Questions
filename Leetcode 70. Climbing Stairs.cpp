class Solution {
public:
    int climbStairs(int n) {
        
        //vector<int> dp(n+1,-1);
        int prev1=1;
        int prev2=0;
        //dp[2]=2;
        for(int i=1;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
