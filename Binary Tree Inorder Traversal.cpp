#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform inorder traversal
void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);  // Traverse left subtree
        cout << root->val << " ";      // Visit node
        inorderTraversal(root->right); // Traverse right subtree
    }
}

int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Performing inorder traversal
    cout << "Inorder traversal of binary tree is: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
