Sample Input :
4
9 8 10 8
8
Sample Output :
3

#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}



int lastIndex(int input[], int size, int x) {
   if(size==0)
     return -1;
    
    
    int ans=lastIndex(input+1,size-1,x);
    if(ans!=-1)
        return ans+1;
    
    if(input[0]==x)
    {
        return 0;
    }
         return -1;


}

