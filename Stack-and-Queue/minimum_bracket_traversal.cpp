Sample Input 1:
{{{
Sample Output 1:
-1
Sample Input 2:
{{{{}}
Sample Output 2:
1

#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}

#include<string>
#include<stack>

int countBracketReversals(string input) {
    int size = 0;
    size = input.length();
    
    if(size % 2 != 0){
        return -1;
    }
    
	stack<char> stk;
    int count =0 ;
    
    for(int i = 0;  i < size ; i++){
        if(input[i] == '{'){
            
            stk.push('{');
            
        }
        else{
            
             if(!stk.empty() && stk.top() == '{'){
                stk.pop();
            }
            else{
                stk.push('}');
            }
            
        }
        
    }
    
    while(!stk.empty()){
        
        char c1 = stk.top();
        stk.pop();
        char c2 = stk.top();
        stk.pop();
        
        if(c1 == c2){
            count ++;
        }
        else{
            count += 2;
        }
        
    }
    return count;
    
	// Write your code here
}
