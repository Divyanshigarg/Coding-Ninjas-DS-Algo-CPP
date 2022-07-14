Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1
Sample Output 1 :
2 3 5 6 8 9 12 
Sample Input 2 :
2
2 5 8 12 -1
3 6 9 -1
10 40 60 60 80 -1
10 20 30 40 50 60 90 100 -1
Sample Output 2 :
2 3 5 6 8 9 12 
10 10 20 30 40 40 50 60 60 60 80 90 100




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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){
    
    // corner cases
    if(head1 == NULL) {
        return head2;
    } 
    
    if(head2 == NULL) {
        return head1;
    }
          
   Node *merge_head = NULL;
   Node *merge_tail = NULL;
    
   while(head1 and head2) {
       if((head1 -> data) < (head2 -> data)){
           if(merge_head == NULL) {
               merge_head = head1;
               merge_tail = head1;
               
           } else {
               merge_tail -> next = head1;
               merge_tail = head1;
           }
           head1 = head1 -> next;
       }
        else {
           if(merge_head == NULL) {
               merge_head = head2;
               merge_tail = head2;
           } else {
               merge_tail -> next = head2;
               merge_tail = head2;
           }
       	   head2 = head2 -> next;
       }
   }
    
   if(head1) {
       merge_tail -> next = head1;
   }
  
   if(head2) {
       merge_tail -> next = head2;
   }
   
   return merge_head; 
}
