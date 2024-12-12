// 使用函式呼叫函式
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0; //終止條件 Terminal Condition 結束條件
        return 1 + max( maxDepth(root->left), maxDepth(root->right) );
    }
};