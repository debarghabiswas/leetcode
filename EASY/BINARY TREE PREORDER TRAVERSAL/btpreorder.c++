#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solutiion{
public:
    void insert(TreeNode *root, int val){
        TreeNode* newNode = new TreeNode(val);
        if(root == nullptr){
            root = newNode;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp->left == nullptr){
                temp->left = newNode;
                return;
            }
            else{
                q.push(temp->left);
            }
            
            if(temp->right == nullptr){
                temp->right = newNode;
                return;
            }
            else{
                q.push(temp->right);
            }
        }
    }

    void preorder(TreeNode* root, vector<int>& arr){
        if(root == nullptr) return;
        arr.push_back(root->val);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }

    vector<int> preorderTraversal(TreeNode* root){
        vector<int> preorderTrav;
        preorder(root, preorderTrav);

        return preorderTrav;
    }
};