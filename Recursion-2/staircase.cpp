Sample Input 1 :
4
Sample Output 1 :
7
Sample Input 2 :
5
Sample Output 2 :
13


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}


int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==0 || n==1 )
        return 1;
    else if(n==2)
        return 2;
    return staircase(n-1)+staircase(n-2)+staircase(n-3);
    
}
