#include<iostream.h>
 
#define MAX 10

class stack
{
	private:
	int arr[MAX];
	int top;
	
	public:
	stack()
	{
		top=-1;
	}
	
	void push(int a)
	{
		if(top<MAX)
		{
		top++;
		arr[top]=a;
		}
		else
		{
		cout<<"stack is full"<<endl;
		}
	}
	
	int pop()
	{
	 if(top==-1)
	 {
	 cout<<"Stack is empty";
	 return NULL;
	 }
	 else
	 {
	 int data=arr[top];
	 arr[top]=NULL;
	 top--;
	 return data;
	 }
	}
};

int main()
{
stack a;
a.push(3);
cout<<"3 is pushed";
a.push(10);
cout<<"10 is pushed";
a.push(1);
cout<<"1 is pushed";

a.pop();
cout<<"1 is poped";
a.pop();
cout<<"10 is poped";
a.pop();
cout<<"3 is poped";


return 0;
}


