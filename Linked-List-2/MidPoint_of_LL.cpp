Sample Input 1 :
1
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
2 
-1
1 2 3 4 -1
Sample Output 2 :
2

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *midPoint(Node *head)
{
   if(head==NULL || head->next==NULL)
   {
       return head;
   }
    Node *slow=head;
    Node *fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
       fast= fast->next->next;
    }
    return slow;
}
