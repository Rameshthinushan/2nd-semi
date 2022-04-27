#include<iostream.h>

int main()
{
char String[10];

cout<<"Input your order ";
for(int i=0;i<=9;i++)
{
	cin>>String[i];
}

cout<<"The correct order ";
for(int i=0;i<=9;i++)
{
	cout<<String[i]<<endl;
}

cout<<"The reverse order ";
for(int i=9;i>=0;i--)
{
	cout<<String[i]<<endl;
}


return 0;
}

