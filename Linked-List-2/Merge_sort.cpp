Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 Sample Output 2 :
2
-1
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90

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

Node* midfinder(Node* head){
    if(head==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

Node* merge(Node* head1,Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data>head2->data){
        swap(head1,head2);
    }
    Node* ans=head1;
    while(head1!=NULL && head2!=NULL){
        Node* temp=NULL;
        while(head1!=NULL && head1->data<=head2->data){
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        swap(head1,head2);
    }
    return ans;
}


Node *mergeSort(Node *head)
{
	//Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* mid=midfinder(head);
    Node* head1=head;
    Node* head2=mid->next;
    mid->next=NULL;
    head1=mergeSort(head1);
    head2=mergeSort(head2);
    return merge(head1,head2);
}
