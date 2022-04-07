/*


Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 
 
 *---------------------------------------------------------SOLUTION------------------------------------------------------------*/
 
 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        
      for(int spaces=1;spaces<=n-i;spaces++)
      {
            cout<<" ";
      }
        
        
         for(int j=1;j<=2*i-1;j++)
         {
            cout<<"*";
         }
        
            cout<<endl;
    }
}


