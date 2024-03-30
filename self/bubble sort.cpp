#include<iostream>
using namespace std;

int main(){
	
	int arr[10];
	
	cout<<"Input Elements: \n";
	for(int i=0; i<10; i++){
		cin>>arr[i];
	}
	
	system("cls");
	
	cout<<"Elements without sorting: "<<endl;

	for(int j=0; j<10; j++){
	cout<<arr[j]<<endl;
}
	
	for(int k=0; k<10; ++k){
		
		for(int l=0; l<10; ++l){
			
			if(arr[l]>arr[l+1]){
				
				int temp=arr[l];
				arr[l]=arr[l+1];
				arr[l+1]=temp;
				
			}
		}
	}
	
	cout<<"Sorted Array: "<<endl;
	for(int s=0; s<10; s++){
		cout<<arr[s]<<endl;
	}
}
