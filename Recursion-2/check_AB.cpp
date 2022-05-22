Sample Input 1 :
abb
Sample Output 1 :
true
Sample Input 2 :
abababa
Sample Output 2 :
false


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}


bool checkAB(char input[]) {
	// Write your code here
   if(input[0]=='\0')
       return true;
    
    else if(input[0]!='a')
        return false;
    

    
   if(input[0]=='a' && (input[1]=='b' && input[2]=='b') )
        return checkAB(input+3);
      
    else{
       return checkAB(input+1); 
    } 
    
}




