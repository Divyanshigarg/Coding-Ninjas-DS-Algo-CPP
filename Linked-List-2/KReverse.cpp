Sample Input 1 :
1
1 2 3 4 5 6 7 8 9 10 -1
4
Sample Output 1 :
4 3 2 1 8 7 6 5 10 9
Sample Input 2 :
2
1 2 3 4 5 -1
0
10 20 30 40 -1
4



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

Node *kReverse(Node *head, int k)
{
	if (head == NULL or k == 0) {
        return head;
    }
    
	Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    
    int count = 0;
    
    while(curr and count < k) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    // after the loop prev will be pointing at the first node of revesed group
	// and head will be at the last
    if(next) {
        head -> next = kReverse(next, k);
    }
    
    return prev;
}


