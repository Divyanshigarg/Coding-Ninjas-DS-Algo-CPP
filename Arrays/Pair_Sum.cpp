#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}

int pairSum(int *arr, int size, int x)
{
    int count=0,sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        sum=arr[i]+arr[j];
        if(sum==x)
            count++;
        
        } 
    }
    return count;
}
