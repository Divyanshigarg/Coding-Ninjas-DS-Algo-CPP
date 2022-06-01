#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}


#include <string>
#include<algorithm>
using namespace std;

void printPermutations_Helper(string input, string ans){
    if(input.size() == 0) {
        cout << ans << endl;
        return;
    }
    
    for(int i = 0; i <= ans.size(); i++){
        printPermutations_Helper(input.substr(1), ans.substr(0,i) + input[0] + ans.substr(i));
    }
    
}
void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
     string ans;
     printPermutations_Helper(input, ans);    
}
