#include "BinarySearchTree.h"

void BinarySearchTree::insert(int data) {
	root = insert(root, data);
}

Node* BinarySearchTree::insert(Node* node, int data) {
	if(node == NULL) {
		node = new Node(data);
	}

	else {
		if(node->data <= data) {
			node->right = insert(node->right, data);
		}
		else {
			node->left = insert(node->left, data);
		}
	}
	return node;
}

