Sample Input 1 :
1
1 4 5 2 -1
Sample Output 1 :
1 5 4 2 
Sample Input 2 :
2
1 11 3 6 8 0 9 -1
10 20 30 40 -1
Sample Output 2 :
1 11 3 9 6 8 0
10 20 30 40

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
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}

Node *evenAfterOdd(Node *head)
{
	if(head==NULL || head->next==NULL)
        return head;
    
    Node *temp=head;
    Node *odd_head=NULL;
    Node *odd_tail=NULL;
    Node *even_head=NULL;
    Node *even_tail=NULL;
    
    while(temp)
    {
        if(temp->data %2!=0)
        {
          if(odd_head==NULL)
          {
              odd_head=temp;
             odd_tail=temp;
          }
            else{
                odd_tail->next=temp;
            odd_tail=temp;
        }
        }
        else{
            if(even_head==NULL)
            {
                even_head=temp;
                even_tail=temp;
            }
        else
        {
            even_tail->next=temp;
            even_tail=temp;
        }}
        temp=temp->next;
    }
        if(odd_head==NULL)
            return even_head;
        else if(even_head==NULL)
          return odd_head;
        else
        {
            odd_tail->next=even_head;
            even_tail->next=NULL;
            return odd_head;
        }
}
