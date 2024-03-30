#include<iostream>
using namespace std;

int main(){
	
	int arr[9]={34,34,56,34,98,12,99,200,56};
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
		
		if(arr[i]==arr[i+j]){
		cout<<arr[i]<<endl;
		cout<<"Index: "<<i<<endl; 
		}
		else{
			arr[i++];
		}
}
	}
}
