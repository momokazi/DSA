#include<iostream>
using namespace std;


void checkPair(int a[], int size, int sum) {
	for (int i = 0; i < size; i++) {
		if ((a[0] + a[i] == sum)) {
			cout << "1st Element: " << a[0] << " at index: " << "0" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
		else if ((a[1] + a[i] == sum)) {
			cout << "1st Element: " << a[1] << " at index: " << "1" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
		else if ((a[2] + a[i] == sum)) {
			cout << "1st Element: " << a[2] << " at index: " << "2" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
		else if ((a[3] + a[i] == sum)) {
			cout << "1st Element: " << a[3] << " at index: " << "3" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
		else if ((a[4] + a[i] == sum)) {
			cout << "1st Element: " << a[4] << " at index: " << "4" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
		else if ((a[5] + a[i] == sum)) {
			cout << "1st Element: " << a[5] << " at index: " << "5" << endl;
			cout << "2nd Element: " << a[i] << " at index: " << i << endl;
		}
	}
}


int main() {

	int arr[10];
	cout << "Enter elements: (Please enter in ascending order.)" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	system("cls");
	checkPair(arr, 10, 10);
}
// time complexity o(n)
