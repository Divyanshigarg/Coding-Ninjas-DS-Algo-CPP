Sample Input 1:
1
3 4 5 2 6 1 9 -1
3 100
Sample Output 1:
3 4 5 100 2 6 1 9
Sample Input 2:
1 
3 4 5 2 6 1 9 -1
0 20
Sample Output 2:
20 3 4 5 2 6 1 9


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

Node* insertNode(Node *head, int i, int data) {
    
    if(head==NULL)
    {
        return head;
    }
    if(i==0)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
        return newnode;
    }
	head->next=insertNode( head->next,i-1,data);
    return head;
    
}
