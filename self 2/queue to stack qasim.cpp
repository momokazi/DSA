#include<iostream>
using namespace std;
class queue
{
private:
	int f,r,a[5],tos,a1[5];
public:
	queue()
	{
		f=0;
		r=0;
		
		for(int i=0;i<5;i++)
		{
			a[i]=0;
		}
	}
	void stack()
	{
		do{
		    int a,n;
		    cout<<"Enter 1 if you want to push"<<endl;
		    cout<<"Enter 2 if you want to pop"<<endl;
		    cout<<"Enter 3 if you to Exit"<<endl;
		    
	        cin>>a;
	        if(a==1)
	        {
	        	cout<<"Enter the value to push"<<endl;
	        	cout<<endl;
		  		cout<<endl;
	        	cin >>n;
	        	cout<<endl;
				cout<<endl;
	        	push(n);
	        }
	        else if(a==2)
	        {
	        	pop();
	        }
	        else if (a==3)
	        {
	        	break;
	        }
	        else 
	        {
	        	cout<<endl;
		    	cout<<endl;
	        	cout<<"Enter thr valid number"<<endl;
	        }
		}while(1);
	}
	void push(int n)
	{
		Enqueue(n);
	}
	void pop()
	{
		Dequeue();
	}
	void Enqueue(int n)
	{
	    
		if(r==5)
		{
			cout<<"Stack is Full"<<endl;
		}
		else
		{
			a[r]=n;
			r++;
			tos++;
		}
	}
	void Dequeue()
	{
		if(tos==0)
		{
			cout<<"Stack is empty"<<endl;
		}
	else
	{
		int n=0;
		for(int i=tos;i>=1;i--)
		{
			a1[n]=a[i];
			n++;
		}
		a[0]=000000000000;
		r--;
		tos--;
		n=0;
		for(int i=tos;i>=1;i--)
		{
			a[n]=a1[i];
			cout<<a[n]<<endl;
			n++;
		}
	}
	}
};
int main()
{
	queue*q=new queue;
	q->stack();
	return 0;
	
}

