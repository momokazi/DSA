#include <iostream>
using namespace std;

struct Node {
	int data;
	int key;

	struct Node* left;
	struct Node* right;
};
struct Node* root = NULL;

struct Node* newNode(int item) {
	struct Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inOrder(Node* temp) {
	if (temp == NULL)
		return;
	
	//Node* root = new Node;
	inOrder(temp->left);
	cout << temp->data << endl;;
	inOrder(temp->right);
}

struct Node *insertElement(struct Node *temp, int elem) {		
		
	if (temp == NULL) 
		return newNode(key);
	
	if (elem < temp->data) {
		temp->left = insertElement(temp->left, elem);
	}
	else {
		temp->right = insertElement(temp->right, elem);
	}
		return temp;
	}


int main() {
	//createNode();
	newNode(10);
	insertElement(root, 5);
	insertElement(root, 2);
	insertElement(root, 6);
	inOrder(root);
}























/*if (temp->data == elem) {
			temp->data = elem;
			cout << temp->data << "->";
		}

		else if (temp->data < elem) {
			temp = temp->right;
			temp->data = elem;
			cout << temp->data << "->";
		}

		else if (temp->data > elem) {
			temp = temp->left;
			temp->data = elem;
			cout << temp->data << "->";
		}
	}
	*/