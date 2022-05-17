Sample Input 1 :
2
Sample Output 1 :
a b
a c
b c
Sample Input 2 :
3
Sample Output 2 :
a c
a b
c b
a c
b a
b c
a c

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}



void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    if(n==0)
        return;
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<<source<<" "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,source,destination); 
    
}

