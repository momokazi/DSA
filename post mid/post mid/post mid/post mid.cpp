#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* right;
	struct Node* left;

	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

void preOrder(Node* root) {
	if (root != NULL) {
		//cout << root->key << " " << endl;
		preOrder(root->left);
		preOrder(root->right);

		if (root->left == NULL) {
			int temp = root->data;
			cout << temp << " " << endl;
		}
		else if (root->right == NULL) {
			int temp = root->data;
			cout << temp << " " << endl;
		}
	}
	else
		return;
}

int main() {
	//root
	struct Node* node = new Node(8);

	node->left = new Node(5);
	node->right = new Node(10);
	node->left->left = new Node(4);
	node->left->right = new Node(6);
	node->right->left = new Node(9);
	node->right->right = new Node(15);

	preOrder(node);
}