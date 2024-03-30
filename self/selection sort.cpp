#include<iostream>
using namespace std;

int main(){
	
	int arr[10];
	int f;
	int k,l;
	
	cout<<"Input Elements: \n";
	for(int i=0; i<10; i++){
		cin>>arr[i];
	}
	
	system("cls");
	
	cout<<"Elements without sorting: "<<endl;
	
	for(int j=0; j<10; j++){
	cout<<arr[j]<<endl;
}
cout<<endl;
	
	for(k=0; k<10; k++){
		int min=k;
		for(l=k+1; l<10; l++){
			if(arr[l]>arr[min]){
				min=l;
			}
		}
	}
	
	for(int s=0; s<10; s++){
		cout<<"Sorted Array: "<<arr[s]<<endl;
	}
}
