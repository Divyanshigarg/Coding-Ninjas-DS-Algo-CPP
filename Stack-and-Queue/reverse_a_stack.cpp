Sample Input 1:
6
1 2 3 4 5 10
Note:
Here, 10 is at the top of the stack.
Sample Output 1:
1 2 3 4 5 10
Note:
Here, 1 is at the top of the stack.
Sample Input 2:
5
2 8 15 1 10
Sample Output 2:
2 8 15 1 10


#include <iostream>
#include <stack>
using namespace std;

#include "solution.h"

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    while(!input.empty())
    {
        int n=input.top();
        extra.push(n);
        input.pop();
    }
    input=extra;
}
