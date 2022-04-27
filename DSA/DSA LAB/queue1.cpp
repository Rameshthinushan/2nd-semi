#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

 
class Queue
{
	int queue[5];
	int front,rear;
	
	public:
	Queue()
	{
		front=-1;
		rear=-1;
	}
	
	void enqueue(int x)
	{
		if(rear>4)
		{
		cout<<"queue is full or over flow"<<endl;
		rear=-1;
		return;
		}
		
		
		queue[++rear]=x;
		cout<<"inserted"<<x;
		
	}
	
	void dequeue()
	{
	 if(front==rear)
	 {
	 cout<<"queue is empty or under flow";
	 return;
	 }
	 
	 
	 cout<<"deleted"<<queue[++front];
	 
	}
	
	void display()
	{
	if(rear==front)
	{
	cout<<"queue is empty";
	return;
	}
	for(int i=front;i<=rear;i++)
	cout<<queue[i]<<" ";
	
	}
};

int main()
{
int ch;
Queue qu;
while(1)
{
cout<<"\n1.insert 2.delete 3.display 4.exit \n Enter your choice ";
cin>>ch;
switch(ch)
{
case 1:cout<<"Enter the element "; cin>>ch; qu.enqueue(ch); break;
case 2: qu.dequeue(); break;
case 3: qu.display(); break;
case 4: exit(0);
}
}


return 0;
}


