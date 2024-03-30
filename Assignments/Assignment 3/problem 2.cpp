#include<iostream>
using namespace std;

class Queue{
	private:
		int size,front,rear;
		int arr[5];
	public:
		Queue(){
			size=5;
			front = -1;
			rear = -1;
		}
		
	void enqueue(int val){
		if(rear==size-1){
			cout<<"Queue Overflow! "<<endl;
		}
		else{
			if(front==-1){
				front=0;
			}
			rear++;
			arr[rear]=val;
		}
	}
	
	void dequeue(){
		if (front == - 1 || front > rear) {
      	cout<<"Queue Underflow ";
      	return ;
   	}	 
  		 else {
    	   cout<<"Element deleted from queue is : "<< arr[front] <<endl;
      	   front++;;
	   }
	}
	
	bool checkEmpty(){
		if(front==rear)
		return true;
	else
	return false;
	}
	
	void display(){
		 if (front == - 1)
  		  cout<<"Queue is empty"<<endl;
   				else {
     			 	 cout<<"Queue elements are : ";
      			 	 for (int i = front; i <= rear; i++)
      			 	 cout<<arr[i]<<" ";
        		  	 cout<<endl;
	}
}
};

int main(){
	Queue* obj=new Queue();
	if(obj->checkEmpty())
	cout<<"Queue isnt empty"<<endl;
	else
	cout<<"queue is empty"<<endl;
	obj->enqueue(1);
	obj->enqueue(2);
	obj->enqueue(3);
	obj->enqueue(4);
	obj->enqueue(5);
	obj->dequeue();
	
	obj->display();
}
