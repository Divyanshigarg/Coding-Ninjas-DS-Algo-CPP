Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}


int multiplyNumbers(int m, int n) 
{
   
    if(n==0)
        return 0;
    
    return m + multiplyNumbers(m , n-1);
    
}



