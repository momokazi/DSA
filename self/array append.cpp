#include <iostream>
using namespace std;

int main(){
	
	int arr[10];
	int length=6;
	int key;
	
	cout<<"Enter Elements in the array: "<<endl;
	
	for(int i=0; i<length; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the number you want to append: "<<endl;
	cin>>key;
	
	arr[length]=key;
	length++;
	
	for(int j=0; j<length; j++){
		cout<<arr[j]<<"\t";
	}
	
	cout<<"Length: "<<length<<endl;
}
