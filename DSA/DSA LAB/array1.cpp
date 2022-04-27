#include<iostream.h>
int main()
{
int a[5]={20,10,12,40,23};
int k,i;
cout<<"Enter the number you want to find ";
cin>>k;
int flag=0;
for(i=0;i<5;i++)
{
	if(a[i]==k)
	{
		flag=1;
		break;
	}
}

if(flag)
{
	cout<<"your number's index is "<<i;
}
else
{
	cout<<"sorry,i could not found your number in array";
}

return 0;
}


