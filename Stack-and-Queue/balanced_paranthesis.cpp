Sample Input 1 :
(()()())
Sample Output 1 :
true
Sample Input 2 :
()()(()
Sample Output 2 :
false


#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}

#include <stack>

bool isBalanced(string exp) {
    
	stack <char> s;
    
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='[' || exp[i]=='(' || exp[i]=='{' )
            s.push(exp[i]);
        
        if(s.empty() && (exp[i]==']' || exp[i]==')' || exp[i]=='}') )
            return false;
   
        
        if(exp[i]==']')
        {	if(s.top()=='[')
                  s.pop();
            else 
                return false;
        }
        
        if(exp[i]==')')
        {      if(s.top()=='(')
                    s.pop();
        		else 
                    return false;
        }
        
        if(exp[i]=='}') 
        {	if(s.top()=='{')
            	s.pop();
        else	
            return false;
        }
      

    }
    if(s.empty())
        return true ;
        else
            return false;
}
