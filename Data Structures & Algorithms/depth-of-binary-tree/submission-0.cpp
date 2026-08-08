/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        
        stack<TreeNode*> stack;
        stack.push(root);

        std::size_t depth {0};

        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();

            if (depth < stack.size()) depth = stack.size();

            if (node->right) stack.push(node->right);
            if (node->left) stack.push(node->left);

        }

        return depth;
    }
};
