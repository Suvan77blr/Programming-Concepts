
// 111124 : COTD
// Checking for a valid BST.

bool isValidBST (TreeNode* root, TreeNode* minNode = nullptr, TreeNode* maxNode = nullptr)
{
	if( root == nullptr)
	{
		return true;
	}

	if( minNode != nullptr && root->data <= minNode->data){
		return false;
	}
	if( maxNode != nullptr && root->data >= maxNode->data){
		return false;
	}

	return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}


// For a given tree,..

bool isBST = isValidBST(root);
