#include<iostream.h>
 
#define MAX 5

class Queue
{
	private:
	int t[MAX];
	int tail;
	int head;
	int size;
	
	public:
	Queue()
	{
		tail=-1;
		head=-1;
		size=0;
	}
	
	int dequeue()
	{
	 
	 if(size<=0)
	 {
	 cout<<"queue is empty";
	 }
	 else
	 {
		head=(head+1)%MAX;
		size--;
		return t[head];
		
	 }
	}
	
	void enqueue(int item)
	{
		if(size>MAX)
		{
		  cout<<"queue is full";	
		}
		else
		{
			tail=(tail+1)%MAX;
			t[tail]=item;
			size++;
		}
		
	}
	
	void display()
	{
	if(size<=0)
	 {
	 cout<<"queue is empty";
	 }
	 
	else
	 {
	   for(int iter=0;iter<=tail;iter++)
	   {
	     cout<<t[iter]<<" ";
	   }
	 }
	}
	
};

int main()
{
Queue a;
int data[5]={32,23,45,99,24};

cout<<"queue before adding elements";
a.display();
cout<<endl<<endl;

for(int iter=0;iter<5;iter++)
{
 a.enqueue(data[iter]);
 cout<<"Addition number : "<<(iter+1)<<":";
 a.display();
 cout<<endl;
}

cout<<endl;
cout<<"queue after adding elements";
a.display();
cout<<endl<<endl;

for(int iter=0;iter<5;iter++)
{
 a.dequeue();
 cout<<"Deletion number : "<<(iter+1)<<":";
 a.display();
 cout<<endl;
}


return 0;

}

