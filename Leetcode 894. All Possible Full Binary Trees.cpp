class Solution {
public:
    
    void solve(int n,vector<TreeNode*> &ans,unordered_map<int,vector<TreeNode*>> &dp){
        if(n==1){
            ans.push_back(new TreeNode());
            dp[n]=ans;
            return;
        }

        if(dp.find(n)!=dp.end()){
            ans=dp[n];
            return;
        }


        for(int i=0; i<n;i++){
            int ln=i;
            int rn=n-i-1;

            vector<TreeNode*> left;
            vector<TreeNode*> right;

            solve(ln,left,dp);
            solve(rn,right,dp);

            for(int i=0;i<left.size();i++){
                for(int j=0;j<right.size();j++){
                    ans.push_back(new TreeNode(0,left[i],right[j]));
                }
            }
        }
        dp[n]=ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        unordered_map<int,vector<TreeNode*>> dp;
        vector<TreeNode*> ans;
        solve(n,ans,dp);
        return ans;
        
    }
};
