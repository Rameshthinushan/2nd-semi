#include<iostream.h>

int main()
{
int a[2][2]={{1,4},{3,1}};
int b[2][2]={{1,6},{2,0}};
int sum[2][2];


cout<<"Your 1st matrix(A)  \n";
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)	 
	{
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}

cout<<"Your 2nd matrix(B)  \n";
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)	 
	{
		cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}



cout<<"A+B matrix  \n";
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)	 
	{
		sum[i][j]=a[i][j]+b[i][j];
		cout<<sum[i][j]<<"\t";
	}
	cout<<endl;
}



return 0;
}

