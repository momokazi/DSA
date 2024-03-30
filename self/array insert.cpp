#include <iostream>
using namespace std;

int main(){
	
	int arr[10];
	int length=5;
	int key;
	int index;	
	
	cout<<"Input Numbers in array: "<<endl;
	
	for(int i=0; i<length; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the index you want to add a number on: "<<endl;
	cin>>index;
	
	cout<<"Enter the number you want to add: "<<endl; 
	cin>>key;
	
	system("cls");
	
	for(int j=length; j>index; j--){
		arr[j]=arr[j-1];
	}
	
	arr[index]=key;
	length++;

	for(int k=0; k<length; k++){
		cout<<arr[k]<<endl<<endl;
	}

	cout<<"Length: "<<length<<endl;
}
