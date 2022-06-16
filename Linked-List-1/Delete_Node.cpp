Sample Input 1 :
1 
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
10 20 30 40 50 60 -1
7
Sample Output 2 :
4 5 2 6 1 9
10 20 30 40 50 60

Node *deleteNode(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    if (pos == 0)
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
    int count = 0;
    Node *temp = head;
    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL && temp->next != NULL)
    {
        temp->next = temp->next->next;
    }
    return head;
}
