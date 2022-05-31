Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba



#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}



#include <string>
#include <algorithm>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
   if(input.size() == 0){
       output[0] ="";
   	   return 1;
   	}
    
    string smallString[10000];
    int smallsize = returnPermutations(input.substr(1), smallString);
    
    int idx = 0;
    for(int i = 0; i < smallsize; i++) {
        for(int j = 0; j <= smallString[i].size(); j++){
            output[idx++] = smallString[i].substr(0,j) + input[0] + smallString[i].substr(j);
        }
    }
    
    return idx;
       
}
