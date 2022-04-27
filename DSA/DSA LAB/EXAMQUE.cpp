#include <iostream.h> 
#include <conio.h>
class FloatList 
{
  private: 
  // Declare a structure for the list 
  struct ListNode  
    {
    float value; 
    struct ListNode *next;  
    };   
    ListNode *head; // List head pointer
  public: 
    FloatList() // Constructor   
    { head = NULL; }  
   //void FloatList(); // Destructor  
    void appendNode(float); 
    void displayList();
}; 
void FloatList::appendNode(float num) 
{ 
   ListNode *newNode, *nodePtr;   
 // Allocate a new node & store num 
   newNode = new ListNode;  
   newNode->value = num;  
   newNode->next = NULL;   
// If there are no nodes in the list  
// make newNode the first node  
   if (!head)   
   head = newNode;  
   else 
// Otherwise, insert newNode at end 
      {   
// Initialize nodePtr to head of list 
         nodePtr = head;  
// Find the last node in the list  
         while (nodePtr->next!=NULL)  
         nodePtr = nodePtr->next;  
// Insert newNode as the last node  
         nodePtr->next = newNode; 
       }
}
   
void FloatList::displayList(void) 
{  ListNode *nodePtr; 
   nodePtr = head;
   while (nodePtr)  
      {cout << nodePtr->value << endl; 
       nodePtr = nodePtr->next;} 
}  
  
int main()
{  
     FloatList list; // Build the list  
     list.appendNode(2.5); 
     list.appendNode(7.9);
     list.appendNode(12.6);
     list.displayList( );
	 return 0; 
}          

