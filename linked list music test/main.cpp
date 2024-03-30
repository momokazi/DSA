#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;

struct Node{
	char data;
	Node* next;	
	string audioFile_str;
};

int main(){
	
	Node a;
	char audioFile[50];
	//char songName[50];
	
	fstream fp;
	
	cout<<"Enter the name of your song (Add .wav after writing the name): "<<endl;
	cin>>audioFile;
	
	Node* head;
	
	Node* one = new Node;
  	Node* two = new Node;
  	Node* three = new Node;
  	
  	
  	one->data='a';
  	two->audioFile_str=audioFile;
  	three->data='b';
  	
  	fp.open(audioFile, ios::in);
    if (fp != NULL)
    { 
      a.audioFile_str = audioFile;
	  cout<<"Now Playing "<<audioFile<<endl;
	  PlaySound(a.audioFile_str.c_str(), NULL, SND_SYNC); 
 }
  	else{
  		cout<<"\nAudio file couldn't run..!!";
 	 	cout<<"\nCheck the following things: \n 1. Your file is an original .wav audio file. \n 2. You have mentioned '.wav' extension in the name of file. \n 3. It is present in the folder where your program is saved.";
	  }
	  fp.close();
  	
  	one->next=two;
  	two->next=three;
  	three->next=NULL;
  	
  	head=one;
  	
  	while(head!=NULL){
  		//cout<<head=head->data<<"->";
  		head=head->next;
  		if(head==NULL){
		cout<<"NULL"<<endl;
	}
	  }
}
