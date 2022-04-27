#include<iostream.h>

int main()
{
int a[10][10],b[10][10],mul[10][10],x,y,p,s;

cout<<"Enter number of rows - 1st matrix(between 1 and 10) : ";
cin>>x;
cout<<"Enter number of columns - 1st matrix(between 1 and 10) : ";
cin>>y;

cout<<"Enter number of rows - 1st matrix(between 1 and 10) : ";
cin>>p;
cout<<"Enter number of columns - 1st matrix(between 1 and 10) : ";
cin>>s;

while(y!=p)
{
cout<<"ERROR..!! columns of 1st matrix is not equal to rows of second matrix ";
cout<<"Enter number of rows - 1st matrix(between 1 and 10) : ";
cin>>x;
cout<<"Enter number of columns - 1st matrix(between 1 and 10) : ";
cin>>y;

cout<<"Enter number of rows - 1st matrix(between 1 and 10) : ";
cin>>p;
cout<<"Enter number of columns - 1st matrix(between 1 and 10) : ";
cin>>s;
}

cout<<"\nEnter elements of 1st(A) matrix ";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		cin>>a[i][j];
		
	}
}

cout<<"\nEnter elements of 2nd(B) matrix ";
for(int i=0;i<p;i++)
{
	for(int j=0;j<s;j++)	 
	{
		cin>>b[i][j];
		
	}
}

cout<<"\nElements of 1st(A) matrix \n";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}

cout<<"\nElements of 2nd(B) matrix \n";
for(int i=0;i<p;i++)
{
	for(int j=0;j<s;j++)	 
	{
		cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}

for(int i=0;i<x;i++)
{
	for(int j=0;j<s;j++)	 
	{
		mul[i][j]=0;
	}
}

for(int i=0;i<x;i++)
{
	for(int j=0;j<s;j++)	 
	{
		for(int k=0;k<y;k++)
		{
			mul[i][j]+=a[i][k]*b[k][j];
		}
	}
}

cout<<"\nElements of A*B matrix \n";
for(int i=0;i<x;i++)
{
	for(int j=0;j<s;j++)	 
	{
		cout<<mul[i][j]<<"\t";
	}
	cout<<endl;
}

return 0;
}

