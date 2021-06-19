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
    int findBottomLeftValue(TreeNode* root) {
        TreeNode* left = root;
        queue<TreeNode*> leftMost;
        leftMost.push(root);
        leftMost.push(NULL);
        
        while(leftMost.size()){
            TreeNode* current = leftMost.front();
            if(current == NULL && leftMost.size() == 1)
                break;
            if(current == NULL && leftMost.size()>1){
                leftMost.pop();
                current = leftMost.front();
                left = leftMost.front();
                leftMost.push(NULL);
            }
            
            if(current->left){
                leftMost.push(current->left);
            }
            
            if(current->right){
                leftMost.push(current->right);
            }
            
            leftMost.pop();
        }
        
        return left->val;
    }
};
