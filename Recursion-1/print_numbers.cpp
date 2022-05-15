Sample Input 1 :
 6
Sample Output 1 :
1 2 3 4 5 6
Sample Input 2 :
 4
Sample Output 2 :
1 2 3 4

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int n;
    cin >> n;
  
    print(n);
}

void print(int n)
{
   if(n == 1){
        cout << n << " ";
        return;
    }
    
    print(n - 1);
    cout << n << " ";
}

