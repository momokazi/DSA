#include<iostream>
using namespace std;

 struct Node {
	int data;
	Node* next;
	Node* head;
};
 struct Node* head = NULL;

void createList(int size) {
	for (int i = 0; i < size; i++) {
		Node* newNode = new Node;
		newNode->data = i;
		newNode->next = head;
		head = newNode;

		if (i == size-1) {
			Node* last = new Node;
			last->head;
			head = newNode;
		}
	}
}

void display() {

	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}
	if (head == NULL) {
		cout << "NULL" << endl;
	}
}

int main() {
	createList(10);
	display();
}