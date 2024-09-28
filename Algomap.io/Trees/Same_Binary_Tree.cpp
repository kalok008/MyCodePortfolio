class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are null, trees are identical up to this node
        if (p == nullptr && q == nullptr) return true;
        // If one is null and the other is not, trees are not identical
        if (p == nullptr || q == nullptr) return false;
        // If the values of the current nodes differ, trees are not identical
        if (p->val != q->val) return false;
        // Recursively check left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
