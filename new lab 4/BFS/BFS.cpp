#include<iostream>
#include<queue>
using namespace std;

//BFS implementation
queue<int>q;

struct Node {
	int data;
	
};
Node* root;
void BFS(Node* root1) {
	int size;
	int vis[20];
	int i;
	int Arr[20][20];

	vis[i] = 1;
	q.push(i);
	Node* q1 = new Node;
	int v;
	while (q.empty()) {
		q.pop();
	}
	for (int u = 0; u < 20; u++) {
		if ((Arr[u][v] == 1) && (vis[u] == 0)) {
			vis[v] = 1;
			q.push(v);
		}
	}
}

int main() {
	
}