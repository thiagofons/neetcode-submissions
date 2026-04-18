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
private:
  bool balanced = true;

public:
  /*
  int calculateHeight(TreeNode *root) {
    if (!root) return 0; 

    int left = calculateHeight(root->left);
    int right = calculateHeight(root->right);

    if (abs(right - left) > 1) balanced = false;

    return 1 + max(left, right);
  }

  bool isBalanced(TreeNode* root) {
    if (abs(calculateHeight(root->right) - calculateHeight(root->left)) > 1)
      balanced = false;
    
    return balanced;
  }
  */

  int height (TreeNode *root) {
    if (!root) return 0;

    return 1 + max(height(root->left), height(root->right));
  }

  bool isBalanced (TreeNode *root) {
    if (!root) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (abs(rightHeight - leftHeight) > 1) return false;

    return isBalanced(root->left) && isBalanced(root->right);
  }
};

