class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0; 

        int ans1 = minDepth(root->left);
        int ans2 = minDepth(root->right);
        if(ans1==0) return ans2 + 1;
        if(ans2==0) return ans1 + 1;
        return min(ans1, ans2) + 1;
    }
};