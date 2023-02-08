class Solution {
public:
    int solve(vector<int> &nums,int indx,int n,vector<int> &dp){
        //base case
        if(indx >= n-1) return 0;
        
        if(dp[indx] != -1) return dp[indx];
        
        int jumps=1e8;
        for(int i=1; i <= nums[indx]; i++){
            jumps = min(jumps,1 + solve(nums,indx + i,n,dp));
        }
        
        return dp[indx] = jumps;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dp(n,-1);
        return solve(nums,0,n,dp);
    }
};