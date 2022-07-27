
Sample Input 1:
4
10 10 10 10
Sample Output 1:
1 1 1 1 
Sample Input 2:
8
60 70 80 100 90 75 80 120
Sample Output 2:
1 2 3 4 1 1 2 8 
    
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}

#include <stack>

int* stockSpan(int *price, int n)  {
    
    stack <int> stk;
    int* output = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        while (!stk.empty () && price [stk.top ()] < price [i])
        {
            stk.pop ();
        }
        
        if (stk.empty ())
        {
            output [i] = i + 1;
        }
        else
        {
            output [i] = i - stk.top ();
        }
        
        stk.push (i);
    }
    
    return output;
}
