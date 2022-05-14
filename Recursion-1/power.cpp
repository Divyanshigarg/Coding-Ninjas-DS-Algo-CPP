Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32



#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}



int power(int x, int n) 
{  
    if(n==0)
        return 1;
    else
     return x*power(x,n-1);
  
}

