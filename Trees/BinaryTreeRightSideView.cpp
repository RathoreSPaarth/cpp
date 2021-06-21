class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> tn;
        vector<int> vec;
        if(root == NULL) return vec;
        vec.push_back(root->val);
        tn.push(root);
        tn.push(NULL);
        int lastElement;
        while(tn.size()){
            TreeNode* current = tn.front();
            if(current == NULL && tn.size() == 1)
                break;
            
            if(current == NULL && tn.size()>1){
                tn.pop();
                current = tn.front();
                tn.push(NULL);
                vec.push_back(lastElement);
            }
            cout<<current->val<<" ";
            if(current->left){
                tn.push(current->left);
                lastElement = current->left->val;
            }
            if(current->right){
                tn.push(current->right);
                lastElement = current->right->val;
            }
            tn.pop();
        }
        
        return vec;
    }
    
};
