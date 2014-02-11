#include "Node.h"

class BinaryTree {
private: 
	Node *root;
	Node* insert(Node* node, int data);
public:
	BinaryTree() {
		root = NULL;
	}
	void insert(int data);
	void printInorder(Node* root);
	Node* getRoot();
};
