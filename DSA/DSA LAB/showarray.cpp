#include<iostream.h>

int main()
{
int m[4][2]={{5,3},{8,4},{2,6},{7,4}};


cout<<"Your matrix  \n";
for(int i=0;i<4;i++)
{
	for(int j=0;j<2;j++)	 
	{
		cout<<m[i][j]<<"\t";
	}
	cout<<endl;
}



return 0;
}

