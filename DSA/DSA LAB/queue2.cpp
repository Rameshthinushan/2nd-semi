#include<iostream.h>
 
#define MAX 5

class Queue
{
	private:
	int t[MAX];
	int tail;
	int head;
	
	public:
	Queue()
	{
		tail=-1;
		head=-1;
	}
	
	int dequeue()
	{
	 int tmp;
	 if(head==-1)
	 {
	 cout<<"queue is empty";
	 }
	 else
	 {
	 for(int j=0;j<=tail;j++)
	 {
	 	if((j+1)<=tail)
		{
		tmp=t[j+1];
		t[j]=tmp;
		}
		else
		{
		tail--;
			if(tail==-1)
			{
			head=-1;
			}
			else
			{
			head=0;
			}
		}
	 }
	 }
	}
	
	void enqueue(int item)
	{
		if((head==-1)&&(tail==1))
		{
		head++;
		tail++;
		}
		else
		{
		tail++;
			if(tail==MAX)
			{
			cout<<"queue is full";
			tail--;
			return;
			}
		}
		t[tail]=item;
	}
	
	void display()
	{
	if(head!=-1)
	 {
	   for(int iter=0;iter<=tail;iter++)
	   {
	     cout<<t[iter]<<" ";
	   }
	 }
	else
	 {
	 cout<<"Empty"; 
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


