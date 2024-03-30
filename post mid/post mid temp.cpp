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

void inOrder(Node* root) {
	if (root != NULL) {
		//inOrder(root->left);
		//cout << root->data << " " << endl;
		inOrder(root->right);
		
		if(root->right==NULL){
			cout<<root->data<<" "<<endl;	
		}
	}
	else
		return;
}

int main() {
	struct Node* node = new Node(8);
	node->left = new Node(3);
	node->right = new Node(10);

	node->left->left = new Node(1);
	node->left->right = new Node(6);
	node->left->right->left = new Node(4);
	node->left->right->right = new Node(7);

	node->right->right = new Node(14);
	node->right->right->left = new Node(13);

	inOrder(node);
}
