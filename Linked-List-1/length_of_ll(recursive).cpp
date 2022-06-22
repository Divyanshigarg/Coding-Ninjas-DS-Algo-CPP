Sample Input 1:
1 
3 4 5 2 6 1 9 -1
Sample Output 1:
7

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

int length(Node *head) 
{
    if(head==0)
        return 0;
    return length(head->next)+1;
}
