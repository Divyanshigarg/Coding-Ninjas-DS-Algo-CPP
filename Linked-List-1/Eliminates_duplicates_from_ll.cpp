Sample Input 1 :
1
1 2 3 3 3 3 4 4 4 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7 
Sample Input 2 :
2
10 20 30 40 50 -1
10 10 10 10 -1
Sample Output 2 :
10 20 30 40 50
10
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

Node *removeDuplicates(Node *head) {
    //Write your code here
    //corner case
    if(head == NULL) {
        return head;
    }
    
    Node *curr = head -> next;
    Node *ptr = head;
    
    while(curr){
        if(curr -> data == ptr -> data) {
            if(curr -> next == NULL) {
                ptr -> next = NULL;
            }
                curr = curr -> next;
        } else {
        	ptr -> next = curr;
        	ptr = curr;
        	curr = curr -> next;
        }
    }
    
    return head;
}

