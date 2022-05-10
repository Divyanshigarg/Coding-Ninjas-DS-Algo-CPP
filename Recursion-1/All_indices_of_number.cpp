Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
    

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
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;

}

//this is last index code


int allIndexes(int input[], int size, int x, int output[]) 
{
    if(size==0)
        return 0;
    
    int ans=allIndexes(input,size-1,x,output);
    
  if(input[size-1]==x)
  {
      output[ans]=size-1;
      return ans+1;
  }
    else
      return  ans;
 }


// both the codes are correct
//this is first index code

//     int allIndexes(int input[], int size, int x, int output[],int count=0,int index=0){
//         if(size==0)
//         return count;

    
//     // nth step -> comparing presence with that element
//     if(input[0] == x){
//         output[count++] = index;
//     }
    
//     //hypothesis -> reach the nth step
//     return allIndexes(input + 1, size - 1, x, output, count, index + 1);    
// }

