#include<iostream>
using namespace std;

struct Node {

	int data;
	struct Node* next;
	struct Node* prev;

};
struct Node* head = NULL;

void createCircularList() {
	for (int i = 0; i < 10; i++) {
		Node* newNode = new Node;
		Node* lastNode = new Node;
		if (i == 9) {
			lastNode->next = head;
		}
		newNode->data = i;
		head->next = newNode;
	}
}

int main() {
	createCircularList();
	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}
}
