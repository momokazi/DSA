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

	bool push(int x) {
		if (top >= 5) {  //check if stack is full
			cout << "Stack Overflow" << endl;
			return false;
		}

		else {
			cout << "Top before: " << top << endl << endl << endl << endl;

			arr[++top] = x;
			cout << x << " pushed into stack" << endl;
			cout << "Top after: " << top << endl << endl << endl << endl;
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

	
	void printStack() {
		while (top >= 0)
		{
			int x = arr[top];
			cout << x << endl;
			pop();
		}
	}
	~Stack() {

	}
};


int main() {

	Stack* s = new Stack();

	system("cls");

	s->push(69);
	s->push(6);
	s->push(7);
	s->push(4);

	cout << s->pop() << " popped from the stack" << endl << endl << endl;
	cout << s->pop() << " popped from the stack" << endl << endl << endl;
	cout << s->peek() << " is the current top element" << endl << endl << endl;
	s->printStack();
	system("PAUSE");

	delete s;
}

