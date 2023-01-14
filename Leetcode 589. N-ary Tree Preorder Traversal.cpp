class Solution {
public:
    void solve(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        for(auto it: root->children){
            solve(it,ans);
        }
    }
    vector<int> preorder(Node* root) {

        vector<int> ans;
        solve(root,ans);
        return ans;
        
    }
};
