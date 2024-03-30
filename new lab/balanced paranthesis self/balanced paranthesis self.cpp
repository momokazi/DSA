#include<iostream>
using namespace std;

bool checkBalance(char a[]);
bool push(char x, char a[]);
char pop(char a[]);


int top = -1;

bool checkBalance(char a[]) {

	for (int i = 0; i < 13; i++) {
		if (a[i] == '(') {
			push('(', a);
			return true;
		}
		else if (a[i] != ')') {
			pop(a);
			return true;
		}
		else {
			cout << "Logical error" << endl;
			return false;
		}
		
	}
}

bool push(char x, char a[]) {
	if (top >= 13) {
		cout << "Stack Overlow" << endl;
		return false;
	}
	else {
		a[++top] = x;
		return true;
	}
}

char pop(char a[]) {
	if (top < 0) {
		cout << "Stack Underflow" << endl;
	}
	else {
		char x = a[--top];
		return x;
	}
}

int main() {
	char arr[14] = { '(','(','a','+','b',')','+','(','c','+','d',')',')' };

	if (checkBalance(arr)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Unbalanced" << endl;
	}
	return 0;
}