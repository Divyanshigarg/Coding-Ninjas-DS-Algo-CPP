Sample Input 1 :
12345
Sample Output 1 :
15
Sample Input 2 :
9
Sample Output 2 :
9

    
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

int sumOfDigits(int n) {
    if(n==0)
        return 0;
    return n%10 + sumOfDigits(n/10);

}



