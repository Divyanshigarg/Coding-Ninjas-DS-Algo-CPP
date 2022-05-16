Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

void removeX(char input[]) {
    // Write your code here

    if(input[0]=='\0')
        return;
    
    if(input[0]!='x')
    {
        removeX(input+1);
    }
    
    else{
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]='\0';
        
        removeX(input);
    }
}

//using string

// string removeCharRecursive(string str,
//                            char X)
// {
//     // Base Case
//     if (str.length() == 0) {
//         return "";
//     }
 
//     // Check the first character
//     // of the given string
//     if (str[0] == X) {
 
//         // Pass the rest of the string
//         // to recursion Function call
//         return removeCharRecursive(str.substr(1), X);
//     }
 
//     // Add the first character of str
//     // and string from recursion
//     return str[0]
//            + removeCharRecursive(str.substr(1), X);
// }

