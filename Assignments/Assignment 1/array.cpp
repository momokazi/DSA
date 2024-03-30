#include<iostream>
using namespace std;

class array{
	
	private:
		int arr[15];
		int length;
		int index;
		int size;
		int key;
		
	public:
		array(){
			length=10;
			size=15;
		}
		
		void display(){
			for(int i=0; i<length; i++){
				cout<<arr[i]<<endl;
			}	
		}
		
		int appendNumber(){
			cout<<"Enter the number you want to append: "<<endl;
			cin>>key;
	
			arr[length]=key;
			length++;
		}
		
		int getLength(){
			return length;
		}
			
	
};

int main(){
	array a;
	int Arr[15];
	int length = a.getLength();
	
	cout<<"Input numbers in the array: "<<endl;
	for(int i=0; i<length; i++){
		cin>>Arr[i];
	}
	a.appendNumber();
	a.display();
}
