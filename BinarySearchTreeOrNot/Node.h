#include<iostream>
using namespace::std;

class Node{
public: 
	int data;
	Node* left;
	Node* right;

	Node(int data1) {
		data = data1;
		left = NULL;
		right = NULL;
	}
};

