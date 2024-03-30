#include<iostream>
using namespace std;

class queue {
private:
	int arr[3], front, rear, size;

public:
	queue() {
		front = 0;
		rear = 0;
		int size = 4;
	}

	void enqueue(int a) {
		if (front == 0 && rear == size - 1) {
			cout << "Can't queue, size is full!" << endl;
		}
		else {
			a = (front + 1) % 10;
			arr[size] = a;
			
			for (int i = 0; i < size; i++) {
				cout << arr[i] << "-";
			}
		}
	}

	void dequeue() {
		int x = -1;
		if (front == rear) {
			cout << "Queue is empty" << endl;
		}
		else if (front == size - 1) {
			front++;
		}
		else {
			x = arr[front++];
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << "-";
		}
	}
};

int main() {
	queue obj;
	int b, c;

	cout << "Press 1 to Enqueue" << endl;
	cout << "Press 2 to Dequeue" << endl;
	cout << "Press 3 to Exit" << endl;
	cin >> c;
	switch (c) {
	case 1:
		cout << "Enter the Number you want to enqueue: " << endl;
		cin >> b;
		system("cls");
		obj.enqueue(b);
		break;

	case 2:
		obj.dequeue();
		break;

	case 3:
		exit(1);
		break;

	default:
		cout << "Logical Error!" << endl;
	}
}