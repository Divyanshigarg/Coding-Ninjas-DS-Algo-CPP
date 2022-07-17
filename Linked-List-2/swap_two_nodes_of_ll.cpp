Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 :
3 4 5 6 2 1 9 
 Sample Input 2 :
2
10 20 30 40 -1
1 2
70 80 90 25 65 85 90 -1
0 6
 Sample Output 2 :
10 30 20 40 
90 80 90 25 65 85 70 

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
    #include <iostream>

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

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}


Node *swapNodes(Node *head, int i, int j)
{
     if(head==NULL){
            return head;
        }
    Node*tem1=head;
    Node*tem2=head;
    
    while(i--){
        tem1=tem1->next;
    }
    Node *ival=tem1;
    
    while(j--){
        tem2=tem2->next;
    }
    Node *jval=tem2;
    
    int x=ival->data;
    ival->data=jval->data;
    jval->data=x;
    
    return head;
    
}

/*
Node *swapNodes(Node *head, int i, int j) {
    
    if(i == j) { return head; } 
    Node *currentNode = head, 
    *prev = NULL; 
    Node *firstNode = NULL, *secondNode = NULL, 
    
    *firstNodePrev = NULL, *secondNodePrev = NULL; 
    int pos = 0; 
    while (currentNode != NULL) {
        if (pos == i) {
            firstNodePrev = prev;
            firstNode = currentNode; 
        }
        else if (pos == j) {
            secondNodePrev = prev; 
            secondNode = currentNode; 
        }
        prev = currentNode; 
        currentNode = currentNode->next;
        pos++; 
    }
    if (firstNodePrev != NULL) {
        firstNodePrev->next = secondNode; 
    }
    else { return head; } 
    if (secondNodePrev != NULL) {
        secondNodePrev->next = firstNode; 
    } 
    else { return head; }
    Node *currentFirstNode = secondNode->next; 
    secondNode->next = firstNode->next; 
    firstNode->next = currentFirstNode; 
    return head; 
}*/
