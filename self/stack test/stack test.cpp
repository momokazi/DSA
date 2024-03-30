#include<iostream>
using namespace std;

class Stack {
private:
	int top;
	int arr[];

public:
	Stack() {
		top = -1;
	}

	bool push(int a, int x) {
		if (top >= a) {  //check if stack is full
			cout << "Stack Overflow" << endl;
			return false;
		}

		else {
			cout << "Top before: " << top << endl<<endl<<endl<<endl;
			
			arr[++top] = x;
			cout << x << " pushed into stack" << endl;
			cout << "Top after: " << top << endl<<endl<<endl<<endl;
			return true;
		}
	}

	int pop() {
		if (top < 0) {	//check if stack is empty
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else {
			int x = arr[top--];
			return x;
		}
	}

	int peek() {
		if (top < 0) {
			cout << "Stack is empty " << endl;
			return 0;
		}
		else {
			int x = arr[top];
			return x;
		}

	}
	bool isEmpty() {
		return(top < 0);
	}

	int searchStack(int x) {
		if (top < 0) {
			cout << "Stack is Empty! " << endl;
		}
		else {
			while (top > 0) {
				if (x == arr[top]) {
					cout << x << " is present at index " << top << endl << endl;
					return x;
				}
				else {
					cout << "Element doesn't exist" << endl;
					return false;
				}
			}
		}
	}

	void printStack() {
		while (top>=0)
		{
			int x = arr[top];
			cout << x << endl;
			pop();
		}
	}
};


int main() {
	int x;
	
	Stack *s=new Stack();
	cout << "Enter Stack Size: " << endl;
	cin >> x;

	system("cls");

	s->push(x,69);
	s->push(x,6);
	s->push(x,7);
	s->push(x,4);

	cout << s->pop() <<" popped from the stack" << endl << endl << endl;
	cout << s->pop() << " popped from the stack" << endl << endl << endl;
	cout << s->peek() << " is the current top element" << endl <<endl << endl;
	s->searchStack(6);
	s->printStack();
	system("PAUSE");
}

