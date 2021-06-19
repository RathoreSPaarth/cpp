class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0, prevSum = 0;
        queue<TreeNode*> tn;
        tn.push(root);
        tn.push(NULL);
        int level = 0;
        while(tn.size()){
            TreeNode* current = tn.front();
            cout<<sum<<endl;
            
            if(tn.size() == 1 && current == NULL)
                break;
            
            if(current == NULL && tn.size()>1){
                tn.pop();
                current = tn.front();
                tn.push(NULL);
                if(sum != 0){
                    prevSum = sum;
                    sum = 0;
                }
                
            }           
            
            if(current->left){
                tn.push(current->left);
                sum+=current->left->val;
            }
                
            if(current->right){
                tn.push(current->right);
                sum+=current->right->val;
            }
                
            tn.pop();
        }
        return prevSum;
    }
};

