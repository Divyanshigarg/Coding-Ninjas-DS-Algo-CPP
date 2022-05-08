Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

#include <iostream>
#include "solution.h"
using namespace std;

#include<string.h>

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


bool help(char a[],int start, int end){
    
    if(start >=end )
        return true;
    
    if(a[start]!=a[end])
        return false;
    
   help(a,start+1,end-1);
     
}


bool checkPalindrome(char input[]) {
    
 int start =0;
   
    int end = strlen(input)-1;
    
    return help(input, start, end) ;
    
}


