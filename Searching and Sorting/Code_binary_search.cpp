//main code
#include <iostream>
using namespace std;

#include "solution.h"

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}

//my code
int binarySearch(int arr[],int n,int val)
{
  int start=0,end=n-1;
    int mid=0;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(arr[mid]==val)
            return mid;
        
        else if(val<=arr[mid])
            end=mid-1;
        
        else
            start=mid+1;
    }
return -1;
}
