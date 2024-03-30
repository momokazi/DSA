#include<iostream>
using namespace std;

char arr[13] = { '(','(','a','+','b',')','+','(','c','+','d',')',')'};

class lab {

private:
	int top;

public:

	lab() {
		top = -1;
	}

	bool push(char x) {
		if (top >= 13) {
			cout << "Stack is filled";
		}
		else {
			//cout << "Top before: " << top << endl << endl << endl << endl;
			arr[++top] = x;
			cout << "Balanced " << endl;
			return true;
		}
	}

	char pop() {
		if (top < 0) {	//check if stack is empty
			cout << "Unbalanced" << endl;
		}
		else {
			char x = arr[top--];
			return x;
			cout << "Unbalanced" << endl;
		}
	}

	void printStack() {
		while (top >= 0)
		{
			char x = arr[top];
			cout << x << endl;
			pop();
		}
	}

};


int main() {


	lab* l = new lab();
	
	//l->checkBalance();

	for(int i = 0; i < 13; i++) {
		if (arr[i] == '(' ) {
			l->push('(');
		}
		else if (arr[i] == ')') {
			l->pop();
		}
	}
}