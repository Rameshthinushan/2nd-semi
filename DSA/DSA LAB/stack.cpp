#include<iostream.h>
 
const int STK_SIZE=5;  

class Stack 
{  private: 
   int top;  
   int stk[STK_SIZE];  
   public:    
   Stack();  
   void initializeStack();    
   void push(int);    
   int pop();    
   int topElement();    
   int isEmpty();    
   int isFull();    
   void displayStack(); 
};  

Stack::Stack() 
{    top=(-1); } 
 
void Stack::initializeStack() 
{    top=(-1); }  

void Stack::push(int Element) 
{    if (top < STK_SIZE-1) 
	 stk[++top]=Element; 
}
  
int Stack::pop() 
{    if (top > -1)       
	 return stk[top--];    
	 else       
	 return 999; //Some invalid integer should be returned 
}
  
int Stack::topElement() 
{    if (top > -1)       
	 return stk[top];    
	 else       
	 return 999; //Some invalid integer should be returned 
}
  
int Stack::isEmpty() 
{    return (top == (-1)); }  

int Stack::isFull() 
{    return (top == (STK_SIZE-1)); } 
 
void Stack::displayStack() 
{    int i=top;   
	 while (i>-1)    
	 {       cout<<stk[i]<<endl;       
	 		 i--;   
	 }
} 
  
int main() 
{    
	   
	Stack s;    
	s.push(5);    
	s.push(7);    
	s.push(6); 
	int x=s.pop();    
	s.push(9);    
	s.displayStack(); 
	return 0;
}  

