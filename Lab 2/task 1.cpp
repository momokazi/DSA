#include<iostream>
using namespace std;

int main(){
	
	int arr[8]={34,34,56,34,98,12,99,200};
	
	for(int i=0; i<8; i++){
			if(arr[i]>arr[i+1]){
				cout<<"Array is not sorted"<<endl;
			}
			/*else if(arr[i]<arr[i+1]){
				cout<<"Array is not sorted";
			}
			else if(arr[i]==arr[i+1]){
				cout<<"Array is not sorted";
			}*/
		}
}
