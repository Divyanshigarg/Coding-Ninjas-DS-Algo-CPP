Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
true

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

bool isPalindrome(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return true;
    Node *current = head;
    Node *prev = NULL;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    if (head->data == current->data)
    {
        prev->next = NULL;
        delete current;
        return isPalindrome(head->next);
    }
    else
        return false;
}



