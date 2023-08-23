// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(x>root->data)
     return search(root->right,x);
    return search(root->left,x);
}
