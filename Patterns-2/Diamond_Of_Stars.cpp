/*Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5

  *
 ***
*****
 ***
  *

The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

*-----------------------------------------------------Solution--------------------------------------------------------*/


#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int n1,n2;
    n1=(n+1)/2;
    n2=n/2;
    
     //for first half
    for(int i=1;i<=n1;i++)
    {
        for(int spaces=1;spaces<=n1-i;spaces++)
        {
            cout<<" ";
        }                                                   \
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    //for second half
     for(int i=1;i<=n2;i++)
    {
        for(int space=1;space<=i;space++)
        {
            cout<<" ";
        }
        
         for(int k=2 * (n2 - i + 1) - 1; k>=1; k--)
        {
            cout<<"*";
        }
     cout<<endl;
        
    }
}

