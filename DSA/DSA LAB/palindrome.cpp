#include<iostream.h>

int main()
{
char String[20];
int length,flag=0;
cout<<"Enter a string :";
cin>>String;
length=strlen(String);
for(int i=0;i<length;i++)
{
	if(String[i]!=String[length-i-1])
	{
		flag=1;
		break;
		
	}
}

if(flag)
{
	cout<<String<<" is not a palindrome";
}
else
{
	cout<<String<<" is a palindrome";
}

return 0;
}

