/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/
// C++ implementation of De-queue using circular
// array
Sample Input 1:
5 1 49 1 64 2 99 5 6 -1
Sample Output 1:
-1
64
99
    
#include<iostream>
using namespace std;

#include "Solution.h"

// Driver program to test above function
int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}



class Deque
{
    // Complete this class
    int *deq;
    int front;
    int rear;
    int si;

public:
    Deque(int size)
    {
        deq = new int[size];
        si = size;
        front = -1;
        rear = -1;
    }

    void insertFront(int ele)
    {

        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            deq[front] = ele;
            return;
        }
        // cout<<"front="<<front<<" rear="<<rear<<endl;
        if ((front + 1) % si == rear)
        {
            cout << (-1) << endl;
            return;
        }
        front = (front + 1) % si;
        deq[front] = ele;
    }

    void insertRear(int ele)
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            deq[rear] = ele;
            return;
        }
        // cout<<"front="<<front<<" rear="<<rear<<endl;
        if (front == rear - 1 || rear == 0 && front == si - 1)
        {
            cout << (-1) << endl;
            return;
        }
        if (rear == 0)
            rear = si - 1;
        else
            rear--;
        deq[rear] = ele;
    }
    void deleteFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << (-1) << endl;
            return;
        }
        if (rear == front)
        {
            rear = -1;
            front = -1;
            return;
        }
        if (front == 0)
            front = si - 1;
        else
            front--;
    }

    void deleteRear()
    {
        if (front == -1 && rear == -1)
        {
            cout << (-1) << endl;
            return;
        }
        if (rear == front)
        {
            rear = -1;
            front = -1;
            return;
        }
        rear = (rear + 1) % si;
    }

    int getFront()
    {
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return deq[front];
    }
    int getRear()
    {
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return deq[rear];
    }
};

