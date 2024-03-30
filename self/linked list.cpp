#include<iostream>
using namespace std;

/*struct node{
	int data;
	node *next;
};*/

class linkedList{
	
	private:
		linkedList *head;
		linkedList *temp;
		linkedList *next;
		linkedList *tail;
		int data;
	
	public:
		
		linkedList(){
		}
	
	void fromHead(int i){
	
	for(int j=0; j<i; j++){
		temp=new linkedList();
		temp->data=j;
		temp->next=head;
		head=temp;
	}
	
	
}
void fromTail(int i){
		for(int j=0; j<i; j++){
		temp=new linkedList();
		temp->data=j;
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
	}
}

void printLinkedList(){
	
	system("cls");
	
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}

};


int main(){
	
	int a;	
	linkedList obj;
	cout<<"Enter no. of nodes u want: "<<endl;
	cin>>a;
	obj.fromHead(a);
	//obj.fromTail(a);
	obj.printLinkedList();
}
