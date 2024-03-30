#include <iostream>
using namespace std;

int main(){
	
	int arr[10];
	int length=6;
	int key;
	int index;	
	int i;
	
	cout<<"Input Numbers in array: "<<endl;
	
	for(int i=0; i<length; i++){
		cin>>arr[i];
	}
		
	cout<<"Enter the number you want to delete: "<<endl; 
	cin>>i;
	
	system("cls");
	
	for(int j=0; j<length; j++)
    {
        if(arr[j]==i)
        {
            for(int l=j; l<length; l++){
			arr[l] = arr[l+1];
        }
            length--;
        }
    }		
	
	for(int k=0; k<length; k++){
		cout<<arr[k]<<endl<<endl;
	}

	cout<<"Length: "<<length<<endl;
}
