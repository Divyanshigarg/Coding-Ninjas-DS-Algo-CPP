Sample Input 1 :
0
Sample Output 1 :
1
Sample Input 2 :
00010204
Sample Output 2 :
2


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}



int countZeros(int n,int count=0) 
{
   if (n==0) {
        return 1;
    } 
    else if (n / 10 == 0) 
    {
    	return count;
    }
    
    // nth step
    if((n % 10==0)) 
    {
        count++;
    }
    // hypothesis step -> to reach the nth step
    return countZeros(n/10, count);
    
}



