#include "BinaryTree.h"

void BinaryTree::insert(int data) {
	root = insert(root, data);
}

Node* BinaryTree::insert(Node* node, int data) {
	if(node == NULL) {
		node = new Node(data);
	}
	else {
		if(node->left == NULL) {
			node->left = insert(node->left, data);
		}
		else node->right = insert(node->right, data);
	}
	return node;
}

void BinaryTree::printInorder(Node *root) {	
	if(root != NULL) {
		printInorder(root->left);
		cout<<"\n"<<root->data;
		printInorder(root->right);
	}
}

Node* BinaryTree::getRoot() {
	return root;
}

