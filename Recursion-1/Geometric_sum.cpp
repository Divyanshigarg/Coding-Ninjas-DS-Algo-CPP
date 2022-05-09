Sample Input 1 :
3
Sample Output 1 :
1.87500
Sample Input 2 :
4
Sample Output 2 :
1.93750


#include <iostream>
#include <math.h>
#include <iomanip>
#include "solution.h"
using namespace std;

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}



double geometricSum(int k)
{
   if(k==0)
        return 1;
    
    int no=1;
    
    for (int i=1;i<=k;i++)
    {
        no=no*2;
    }
     double power= 1/(double)no;
    
    return power+geometricSum(k-1);
}



