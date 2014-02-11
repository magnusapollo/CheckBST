#include "BinaryTree.h"

class BinarySearchTree:public BinaryTree {
private:
	Node* root;
	Node* insert(Node* node, int data);
public: 
	BinarySearchTree() {
		root = NULL;
	}
	void insert(int data);
	void del();
	Node* getRoot() {
		return root;
	}
};
