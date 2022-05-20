Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
2 1 5 2 3
Sample Output 2 :
1 2 2 3 5 


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

void MergeArr(int a[],int s,int e)
{
    int mid=(s+e)/2;

    int a3[e];//alternate array
    int i=s-1,j=mid,k=0;
    for( k=s-1;(i<mid&&j<e);k++)//merging array
    {

            if(a[i]<=a[j])
            {
                a3[k]=a[i];
                i++;
            }
            else
            {
                a3[k]=a[j];
                j++;
            }
    }
    //merging left elements
    if(i<mid)
    {
        for(int m=i;m<mid;m++)
        {
            a3[k++]=a[m];
        }
    }
    if(j<e)
    {
        for(int m=j;m<e;m++)
        {
            a3[k++]=a[m];
        }
    }
    //copying into original array
    for(int i=s-1;i<e;i++)
    {
        a[i]=a3[i];
    }
    
}

void mergeSort1(int input[],int si,int ei)
{
    if(si>=ei)
        return;
    
   int mid=(si+ei)/2;
    
    mergeSort1(input,si,mid);
    mergeSort1(input,mid+1,ei);
    MergeArr(input,si,ei);
}

void mergeSort(int input[], int size){
	// Write your code here
      int  si=1;
   int ei=size;
    mergeSort1(input,si,ei);
}




