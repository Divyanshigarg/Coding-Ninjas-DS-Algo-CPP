Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz


#include<bits/stdc++.h>

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

void removeConsecutiveDuplicates(char *input) {
	
if(input[0]=='\0')
    return ;
    
    if(input[0]==input[1])
    {
        int i=2;
        for(;i<strlen(input);i++)
        {
            input[i-1]=input[i];
            
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
    else 
        removeConsecutiveDuplicates(input+1);

}
