#include<iostream>
using namespace std;
const 
class Queue {
private:
	int size;
	int arr[5];
	int front;
	int rear;
	int v; ///vertix of  no
public:
	Queue(int v)
	{
		
		size = 5;
		front = 0;
		rear = -1;
	}
	void enqueue(int value) {
		if (rear == size - 1) {
			cout << "Queue is full" << endl;
			return;
		}
		else
		{
			arr[++rear] = value;
		}
	}
	void dequeue() {
		if (front > rear)
		{
			cout << "Queue is empty" << endl;
			return;
		}
		else
		{
			++front;
		}
	}
	int get_front()
	{
		if (front > rear)
		{
			cout << "Queue is empty" << endl;
			return -1;
		}
		return arr[front];
	}
	bool is_empty()
	{
		return front > rear;
	}


	//d/////////////

	void addEdge(int v, int w)
	{
		
	}
	int BFS()
	{
		// Mark all the vertices as not visited
		int* visited = new int[v];
		for (int i = 0; i < v; i++)
			visited[i] = 1;
		enqueue(v);
		int u;
		while (!is_empty())
		{
			u = dequeue();
		}

	}
};
