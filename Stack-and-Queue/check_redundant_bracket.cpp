Sample Input 1:
a+(b)+c 
Sample Output 1:
true
Explanation:
The expression can be reduced to a+b+c. Hence, the brackets are redundant.
Sample Input 2:
(a+b)
Sample Output 2:
false

#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}


#include<stack>
bool checkRedundantBrackets(string input) {
	// Write your code here
    int j=0;
    int f=0;
    stack<char>s;
    
    while(input[j]!='\0')
    {
       if(input[j]=='(')
       {
           s.push(input[j]);
       }
      else if(input[j]==')')
      {   
          int c=0;
         while(s.top()!='(')
         {
             s.pop();
             c++;
         }
          if(c<=1)
          {
              f=1;
             return true;
          }
          else
          {
              s.pop();
          }
      }
        else
        {
            s.push(input[j]);
        }
        j++;
    }
    if(f==0)
    {
        return false;
    }

}
	// Write your code here

