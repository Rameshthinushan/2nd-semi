#include<iostream.h>

int main()
{
int a[10][10],b[10][10],sum[10][10],x,y;

cout<<"Enter number of rows(between 1 and 10) : ";
cin>>x;
cout<<"Enter number of rows(between 1 and 10) : ";
cin>>y;

cout<<"\nEnter elements of 1st(A) matrix ";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		cin>>a[i][j];
		
	}
	cout<<endl;
}

cout<<"\nEnter elements of 2nd(B) matrix ";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		cin>>b[i][j];
		
	}
	cout<<endl;
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
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}


cout<<"\nElements of A+B matrix \n";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)	 
	{
		sum[i][j]=a[i][j]+b[i][j];
		cout<<sum[i][j]<<"\t";
	}
	cout<<endl;
}

return 0;
}

