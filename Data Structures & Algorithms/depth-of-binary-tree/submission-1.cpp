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
        
        stack<pair<TreeNode*, int>> stack;
        stack.push({root, 1});

        int maxDepth {0};

        while (!stack.empty()) {
            pair<TreeNode*, int> cur = stack.top();
            TreeNode* node = cur.first;
            int depth = cur.second;

            stack.pop();



            maxDepth = max(maxDepth, depth);

            if (node->right) stack.push({node->right, depth + 1});
            if (node->left) stack.push({node->left, depth + 1});

        }

        return maxDepth;
    }
};
