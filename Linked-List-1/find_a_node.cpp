Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6
Sample Output 1 :
2
-1
Sample Input 2 :
2
1 -1
2
3 4 5 2 6 1 9 -1
6
Sample Output 2 :
-1
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

int findNode(Node *head, int n, int count = 0) {
    
    // corner case 
	if(head == NULL) {
        return -1;
    }
    // base case
    if(n == head -> data) {
        return count;
    }
    
    return findNode(head -> next, n, count + 1);
}
