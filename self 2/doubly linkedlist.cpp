#include<iostream>
using namespace std;


struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
	//struct Node* head;
};

struct Node* head=NULL;

void createList(){
	
	for(int i=0; i<10; i++){
	
		Node* newNode=new Node;
		newNode->data=i;
		newNode->next=head;
		head=newNode;
	}
}

void insertStart(struct Node** head, int data){
	
	struct Node* newNode=new Node;
	newNode->data=data;
	newNode->next=(*head);
	newNode->prev=NULL;
	
	if((*head)!=NULL){
		(*head)->prev=newNode;
	}
	
	//new head 
	(*head)=newNode;
}

void insertEnd(struct Node** head, int data){
	struct Node* newNode= new Node;
	newNode->data=data;
	newNode->next=NULL;
	
	struct Node* temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
}

void insertSpecific(struct Node* prevNode, int data){
	struct Node* newNode =  new Node;
	newNode->data=data;
	newNode->next=prevNode->next;
	prevNode->next=newNode;
	newNode->prev=prevNode;
}

void delNode(struct Node** head, struct Node* delNode){
	if((*head)==NULL || delNode==NULL){
		cout<<"Lun khao"<<endl;
		return;
	}
	
	if((*head)==delNode){
		*head=delNode->next;
	}
	if(delNode->prev!=NULL){
		delNode->prev->next=delNode->next;
	}
	if(delNode->next!=NULL){
		delNode->next->prev=delNode->prev;
	}
}


void display(){
	
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}	
	if(head==NULL){
		cout<<"NULL"<<endl;
	}
}

int main(){
	
	
	createList();
	insertStart(&head, 69);
	insertSpecific(head->next->next,67);
	insertEnd(&head, 420);
	delNode(&head, head->next);
	display();
}
