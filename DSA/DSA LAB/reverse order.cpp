#include<iostream.h>

int main()
{
 int i;
 char arr[10];
 cout<<"Enter the Characters Of Array \n";
  for(int i=0;i<10;i++)
  cin>>arr[i];
  	cout<<"the order of Array is: \n";
	 for(int i=0;i<=10;i++)
	cout<<arr[i]<<endl;
	cout<<"the Reverse order of Array is: \n";
	 for(int i=10;i<=0;i--)
	cout<<arr[i]<<endl;
	cout<<"\t"<<arr[i]<<endl;
    

return 0;
}

