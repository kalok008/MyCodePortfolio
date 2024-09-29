class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        prev = nullptr;
        minDiff = INT_MAX;
        inOrderTraversal(root);
        return minDiff;
    }

private:
    TreeNode* prev;
    int minDiff;

    void inOrderTraversal(TreeNode* node){
        if(node == nullptr){
            return;
        }

        inOrderTraversal(node->left);

        if(prev != nullptr){
            minDiff = min(minDiff, node->val - prev->val);
        }

        prev = node;

        inOrderTraversal(node->right);
    }
