Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}


int helper(int input[],int l,int r,int x)
{
    if(l>r)
        return -1;
    
   int mid=(l+r)/2;
    
    if (input[mid]==x)
         return  mid;
    
    else if(input[mid]>x)
        return helper(input,l,mid-1,x);
    
    else 
         return  helper(input,mid+1,r,x);
    
    
}
int binarySearch(int input[], int size, int element)
{
    int l=0;
    int r=size-1;
    int ans=helper(input,l, r,element);
    return ans;
}

