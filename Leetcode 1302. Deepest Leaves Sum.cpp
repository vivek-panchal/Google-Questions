// deepest level some
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;

        while(!q.empty()){
            int level=q.size();

            sum=0;

            while(level!=0){
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
                level--;
            }
        }
        return sum;
    }
};
