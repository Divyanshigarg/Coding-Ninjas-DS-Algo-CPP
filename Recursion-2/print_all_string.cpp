Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw


#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}



#include <string>
#include <algorithm>
using namespace std;

char ctchar(int i) {
    char c = 'a' + i - 1;
    return c;
}
int ctin(char a) {
    int n = a - '0';
    return n;
}

void printAllPossibleCodes_Helper(string input, string ans) {
    //base case
    if(input.empty()) {
        cout << ans << endl;
        return;
    }
    
    //hypotheis
    char add = ctchar(ctin(input[0]));
    printAllPossibleCodes_Helper(input.substr(1), ans + add);
    
    
    
    if(input.size() > 1){
        int curr = ctin(input[0]) * 10 + ctin(input[1]);
        if(curr >= 10 & curr <= 26) {
            printAllPossibleCodes_Helper(input.substr(2), ans + ctchar(curr));
        }
    }
}

void printAllPossibleCodes(string input) {
    string res;
    printAllPossibleCodes_Helper(input, res);
}
