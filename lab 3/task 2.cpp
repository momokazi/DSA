#include <iostream>
using namespace std;

int main(){
	
	int arr1[10],arr2[5],arr3[100];
	int i,k,l;	
	
	cout<<"Input Numbers in array 1: "<<endl;
	for( i=0; i<5; i++){
		cin>>arr1[i];
		arr3[i]=arr1[i];
}

l=i;

cout<<"Input Numbers in array 2: "<<endl;
	
	for( i=0; i<5; i++){
		cin>>arr2[i];
		arr3[l]=arr2[i];
		l++;
}
system("cls");
	
for(k=0; k<l; k++){
	cout<<arr3[k]<<endl;
}	
}
