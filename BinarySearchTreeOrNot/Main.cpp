#include "BinarySearchTree.h"

int checkBST(Node* node, int min, int max)
{
	if(node == NULL) 
		return 1;

	if(node->data < min || node->data >max)
		return 0;

	return checkBST(node->left, min, node->data) &&
		checkBST(node->right, node->data, max);
}

int checkBST(Node* node) 
{
	return checkBST(node, INT_MIN, INT_MAX);
}

int main() {
	int data = 0;
	BinarySearchTree bst = BinarySearchTree();
	BinaryTree bt = BinaryTree();
	cout<<"Enter data for BST: ";
	cin>>data;	
	while(data != -1) {
		bst.insert(data);
		cout<<"Enter data for BST: ";
		cin>>data;
	}
	bst.printInorder(bst.getRoot());
	if(checkBST(bst.getRoot()))
		cout<<"This is a BST";
	else 
		cout<<"Not a BST";
	data = 0;
	cout<<"\n";
	cout<<"Enter data for BST: ";
	cin>>data;	
	while(data != -1) {
		bt.insert(data);
		cout<<"Enter data for BST: ";
		cin>>data;
	}
	bt.printInorder(bt.getRoot());
	if(checkBST(bt.getRoot()))
		cout<<"This is a BST";
	else 
		cout<<"Not a BST";
	char ch;
	cin>>ch;
	return 0;
}