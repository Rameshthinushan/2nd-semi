#include<iostream.h> 
#include<conio.h> 
class LinkedList 
{ 
  private:  
  struct listNode  
  {   
     int data;   
	 listNode* next;  
  };
    
 listNode* head;  
 
 public: 
 LinkedList();  
 void initializeList();  
 void insertFirstElt(int elt);  
 void insertAtFront(int elt);  
 void insertAtEnd(int elt);  
 void insertAfter(int newElt);  
 void deleteElt(int elt);  
 void displayList();  
 int isEmpty();  
 int isFull(); 
};  

   LinkedList::LinkedList()  //Constructor 
   		{  head=NULL; }  

   void LinkedList::initializeList() 
   		{  head=NULL;  }  

   void LinkedList::insertFirstElt(int elt)  
   		{  
		   head=new listNode;  
		   head->data=elt;  
		   head->next=NULL;  
		}
		  
   void LinkedList::insertAtFront(int elt) 
        {   
		   listNode *newNode;  
		   newNode=new listNode;  
		   newNode->data=elt; 
           newNode->next=head;  
		   head=newNode; 
		}  
		
	void LinkedList::insertAtEnd(int elt) 
	    {   
		   listNode *newNode, *curNode;  
		   newNode=new listNode;  
		   newNode->data=elt;  
		   newNode->next=NULL;  
		   if (!head)   
		      head=newNode;  
		   else  
		     {   
			   curNode=head;   
			   while (curNode->next != NULL)    
			      curNode = curNode->next;   
				  curNode->next = newNode;  
			 } 
		}  
		 
	void LinkedList::insertAfter(int newElt) 
	    {   
			/*  listNode *newNode,*curNode,*previousNode;
			newNode=new listNode;
			newNode->data=newElt;
			
			if(!head)
			{
			  head=newNode;
			  newNode->next=NULL;
			}  
			else
			{
			  curNode=head;
			  while(curNode!=NULL && curNode->data<newElt)
			  	{
					previousNode=curNode;
					curNode=curNode->next;
				}
			}
			
			if(previousNode==NULL)
			{
				head=newNode;
				newNode-> = curNode;
			}
			else
			{
				previousNode->next=newNode;
				newNode->next=curNode;
			} */
		}  
	
	void LinkedList::deleteElt(int elt) 
		{  
		  listNode *curNode, *previousNode;
		  if(!head)
		    return;
		  
		  if(head->data==elt)
		  {
		    curNode=head->next;
			delete head;
			head=curNode;
		  } 
		  else
		  {
		  	curNode=head;
			
			while(curNode!=NULL && curNode->data!=elt)
				{
					previousNode=curNode;
					curNode=curNode->next;
				}
			previousNode->next=curNode->next;
			delete curNode;
		  }
		}  
		
	void LinkedList::displayList() 
		{  
		   listNode* curNode;  
		   curNode=head;  
		   while (curNode)  
		   	 {  
			    cout<<curNode->data<<"  ";   
			    curNode=curNode->next;  
		     } 
		} 
		 
	int LinkedList::isEmpty() 
		{  
		  if (head== NULL)  
		     return 1;  
		  else   
		     return 0; 
	    }   

	int LinkedList::isFull()  //It always returns false.
	    {  return 0; }  
		
int main() 
{
   LinkedList lst;  
   lst.insertAtEnd(4);
   
   lst.insertAtEnd(6);  
   lst.insertAtEnd(5); 
   lst.deleteElt(6); 
   //lst.insertAfter(3);  
   lst.displayList(); 
   return 0;
} 

