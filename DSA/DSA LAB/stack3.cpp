#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

 
class stack
{
	int stk[5];
	int top;
	
	public:
	stack()
	{
		top=-1;
	}
	
	void push(int x)
	{
		if(top>4)
		{
		cout<<"stack is full or over flow"<<endl;
		return;
		}
		
		
		stk[++top]=x;
		cout<<"inserted"<<x;
		
	}
	
	void pop()
	{
	 if(top<0)
	 {
	 cout<<"Stack is empty or under flow";
	 return;
	 }
	 
	 
	 cout<<"deleted"<<stk[top--];
	 
	}
	
	void display()
	{
	if(top<0)
	{
	cout<<"stack is empty";
	return;
	}
	for(int i=top;i>=0;i--)
	cout<<stk[i]<<" ";
	
	}
};

int main()
{
int ch;
stack st;
while(1)
{
cout<<"\n1.push 2.pop 3.display 4.exit \n Enter your choice ";
cin>>ch;
switch(ch)
{
case 1:cout<<"Enter the element "; cin>>ch; st.push(ch); break;
case 2: st.pop(); break;
case 3: st.display(); break;
case 4: exit(0);
}
}


return 0;
}


