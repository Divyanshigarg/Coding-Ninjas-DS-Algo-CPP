/*Print the following pattern for the given number of rows.
Pattern for N = 4
      1
     232
    34543
   4567654

The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654


*-----------------------------------------------------Solution-----------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int val=0;
    for(int i=1;i<=n;i++)
    {
        for(int spaces=1;spaces<=n-i;spaces++)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++)             //this loop is for fisrt half i.e.
        {                                 //   1                             
            cout<<val+j;                 //   23
        }                               //   345
        val++;                         //   4567
        
        for(int k=2*i-2;k>i-1;k--)                //this loop is for second half i.e.
        {                                         //
            cout<<k;                             //     2
        }                                       //      43
                                               //       654
        cout<<endl;
    }
}

