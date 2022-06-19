Sample Input 1 :
2
1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5
Sample Output 1 :
3 4 5 1 2
20 30 40 50 60 10
Sample Input 2 :
1
10 6 77 90 61 67 100 -1
4
Sample Output 2 :
90 61 67 100 10 6 77 

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

Node *appendLastNToFirst(Node *head, int n)
{
    int value=1,count=1;
    
    if(head==NULL)
        return head;
    
    Node *temp=head;
     Node *ptr=head;
    
    while(temp->next)
    {
        temp=temp->next;
        count++;
    }
    while(value<count-n)
    {
        ptr=ptr->next;
        value++;
    }
    temp->next=head;
     head=ptr->next;
    ptr->next=NULL;
    return head;
}
