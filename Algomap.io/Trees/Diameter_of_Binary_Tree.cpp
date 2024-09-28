class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int largestDiameter = 0;
        height(root, largestDiameter);
        return largestDiameter;
    }
    
private:
    int height(TreeNode* node, int& largestDiameter){
        if (!node) return 0;
        
        int leftHeight = height(node->left, largestDiameter);
        int rightHeight = height(node->right, largestDiameter);
        int diameter = leftHeight + rightHeight;
        
        largestDiameter = max(largestDiameter, diameter);
        
        return 1 + max(leftHeight, rightHeight);
    }
};
